# 2017Fall-SmartCookingAssistant
# 動機
「做出幫助大家嘗試新料理的好幫手」

# 作法

## 開發環境

* <font color=red>MSP432</font> P401R LaunchPad Development Kit
* TI SimpleLink<sup>TM</sup> CC2650 module
* Raspberry Pi 3
* python2.7
* Energia
* Qt Creator 5.10.0
* Node 9.3.0
* MySQL 5.7.8

## 專案架構
 <img src="https://i.imgur.com/CSf8xPK.png" width="75%" height="75%">

* 雲端共享食譜平台。
* Local 端以語音操控 RPi 上的介面。
* 軟體介面對應料理步驟，顯示文字提示。
* RPi 以 BLE 與 MSP432 溝通，亮起 LED 燈提示該步驟要使用的材料與工具。


# 成果
## Speech Recognition
我們使用了語音辨識套件，搭配簡單的 rule-based 的判斷，讓使用者可以用語音（英文）操控上一頁/下一頁的指令。
### How to reproduce:
1. 使用USB音效卡與 3.5mm 麥克風，若使用Raspbian Stretch，更改 /usr/share/alsa/alsa.conf中的
```
defaults.ctl.card 0
defaults.pcm.card 0
```
這兩行，將card 0 改為 card 1
並且uncomment以下
`# load card-specific configuration files (on request)`
之後可使用 [aplay 和 arecord](https://www.systutorials.com/docs/linux/man/1-aplay/)指令來測試音效卡與麥克風是否能成功使用

2. 安裝python的[SpeechRecognition](https://pypi.python.org/pypi/SpeechRecognition/)套件，由於我們有使用麥克風，因此需要另外使用
```
sudo apt-get install python-pyaudio
```
來安裝pyaudio套件

3. 在rpi上使用`python speech.py`來開啟socket server，之後等待Qt與其連線便可以開始進行語音辨識與操作

### Solved Problems
1. 在辨識的code中加入了timeout，提高了許多效能
2. 加入了adjust_for_ambient_noise函數來降低環境噪音對辨識的影響

---

## Hardware Prototype

　　這個裝置主要的目標是偵測位置上有沒有放置物品，以及提醒使用者哪個位置放有要使用的物品。使用的感測器為 SR-04 超音波測距模組。使用者在拿起提示的物品之後，燈會自動熄滅。
 <img src="https://i.imgur.com/E4UXhW0.jpg" width="60%" height="60%">

### How to reproduce:
1. 安裝 [Energia](http://energia.nu/download/)
2. 在 Energia 中安裝對應 CC2650 模組的 BLE 函式庫<br/>(Sketch>Include Library>Manage Libraries...)
3. MSP432 與 CC2650 結合，裝上對應數量的 SR-04 與 LED 燈
4. Compile and upload `msp432/msp432.ino` to the MSP432. 

腳位參考:

| #    | SR-04 trig | SR-04 echo | LED       |
| ---- | ---------- | ---------  | --------- |
| 1    | 5  (P4.1)  | 6 (P4.3)   | 40 (P2.7) |
| 2    | 9  (P6.5)  | 10 (P6.4)  | 39 (P2.6) |
| 3    | 12 (P5.2)  | 11 (P3.6)  | 38 (P2.4) |
| 4    | 23 (P6.1)  | 24 (P4.0)  | 37 (P5.6) |
| 5    | 25 (P4.2)  | 26 (P4.4)  | 36 (P6.6) |
| 6    | 27 (P4.5)  | 28 (P4.7)  | 34 (P2.3) |

[MSP432 的全部腳位對應圖](http://energia.nu/wordpress/wp-content/uploads/2015/03/2016-06-09-LaunchPads-MSP432-2.0-%E2%80%94-Pins-Maps.jpg)

### Solved Problems

剛開始測試的時候，發現 SR-04 的偵測會時快時慢，以及有偵測距離突然變為 0 的狀況。推測是 SR-04 有時會收不到反射回來的訊號，而 [`pulseIn(pin, value, timeout)`](https://www.arduino.cc/en/Reference.PulseIn) 這個函數會等待指定的 pin 腳回傳的訊號（預設為一秒），從 SR-04 的 [datasheet](http://www.micropik.com/PDF/HCSR04.pdf) 可知，感測器需要接收到反射的超聲波，腳位才會有訊號，因此才會有突然卡住的狀況。解決的方法為 1)將 `pulseIn(echo, HIGH)` 改為 `pulseIn(echo, HIGH, 5000)` ，並將 2) 個別感測器嘗試的次數提高，若沒有訊號就再試一次。如此一來，即可使裝置穩定地運作。

---

## BLE Connection
我們使用了藍芽模組 TI SimpleLink<sup>TM</sup> CC2650 module，建立 ble custom profile，以 characteristics 代表裝置要提示使用者的位置。使得 RPi 可以在不同的步驟改寫 characteristics ，讓裝置上的提示燈明滅狀態改變。

### How to reproduce:

1. 用手機讀取 app LightBlue 讀取藍牙裝置的硬體位置，把讀到的位置寫在 `RPi/bleClient.py` 裡。  
2. 在 RPi 上執行 `sudo python bleClient.py` ，程式使用的套件為 [gattlib](https://bitbucket.org/OscarAcena/pygattlib)。這份程式會建立 socket，等待使用者介面的訊息。若介面要更改架子的狀態，則程式會改寫 msp432 上的 characteristics。

### Solved Problems


BLE Profiles 在執行過 [Energia 的範例](http://energia.nu/reference/ble/bleinputoutputsampleapp/)後就被固定住了，只有 4 個可以讀寫的 characteristics 可以使用。在這之前有執行過 Code Composer Studio(CCS) 上的 project zero，以手機 app LightBlue 查看，讀到的 Profile 跟 project zero 程式內容是對應的，在跑過 Energia 的範例之後，讀到的 profile 跟 Energia 的程式內容也是對應的，但是至此之後不管是在 Energia 還是 CCS 上都無法更改架構（重新跑 project zero 也不行）。 

解決的方式是，BLE 可以在 characteristics 上放「一串」資料，只要講所有的 LED 的狀態寫在一個 characteristic 當中，再以[` ble.readValue_uint8_t(&bleChar, &len)`](http://energia.nu/reference/ble/ble-readvalue/) 這個函數在 msp432 上讀取數值即可。
舉例來說，我們以一個 byte 來代表一個 LED 燈的亮度，若總共六個燈當中第 0,2,3 個燈要亮，則用手機讀到的數值就會是 `FF 00 FF FF 00 00`。

---

## Qt Interface


This project contains C++ for BackEnd and QML for FrontEnd. Note that this project can only be built with Speech Recognition server, BLE server, and Node server (Or you can comment line 75,76 in `src/appInstance.cpp` and line 43,44 in `src/CookingPage.xml`).

User can view local recipes in 你的珍藏 and play those recipes to learn cooking, and get new recipes other people share from 商店街 (however, this functionality is not yet completely provided).

<img src="https://i.imgur.com/7Nb504P.png" width="300" height="225"> <img src="https://i.imgur.com/4Aw14rv.png" width="300" height="225">

<img src="https://i.imgur.com/3ByGK8x.png" width="300" height="225">  <img src="https://i.imgur.com/JkCNsPl.png" width="300" height="225">





### How to reproduce:

Install Qt Creator from official website. 

Fetch Fluid sources from the root directory of your project:

```shell
git clone https://github.com/NTUEE-ESLab/2017Fall-SmartCookingAssistant.git
```

Now create a project like `minimalqbs.qbs` that includes both `fluid`
and the actual code of your app (inside the `src` sub-directory).

Open project with main Qbs code `minimalqbs.qbs` by Qt Creator. Note that you should choose `qbs` as your compiler. To learn to use Qt5, please refer to below. Note that `minimal.pro` is for `qmake`. The code needs to be modified to support `qmake`(`qmake` does not allow Q_INVOCABLE function from other than main thread).

### Libraries

[Fluid](https://github.com/lirios/fluid) -- QtQuick Components of Material Design
[QuickStreams](https://qbeon.github.io/QuickStreams/) -- Asynchronous Programming Library 

### Problems

#### How does C++ communicate with QML(JavaScript)?

C++ notifies QML by registering function to become Qvariant, while QML notifies C++ by calling Q_INVOCABLE function.

#### Which compiler should I use?

I would suggest `qmake`, since `qmake` is easier for using than `cmake`. While `qbs` is like QML code and is also clear to read, it may not support on Raspberry Pi (In this code, `qbs 1.10.0` is required, but only `qbs 1.7.0` provided).

#### How can I build project in console?

Please refer to Project button on the left side of Qt Creator. Copy the codes of Build and Run.
Or read the compile output when project is built.

#### How can parent component call function or variable of child component in QML?

If they are in the same file, call `id` of child. For child to call function or variable of parent, directly call `id` of parent.

---

## Node server

(Qt interface can run without this server, except for functionality of 商店街 is not provided.)

### How to reproduce:

Run in `server` directory:

```shell
npm install
npm run
```

Note that to run the node server, you should have`node`, `npm`, and `mysql` installed. 

A `blog_admin` database should be built in MySQL. Run the following code to build table for server:

```shell
./node_modules/.bin/sequelize db:migrate
```

Our code does not yet provide interface to save Recipe into database. To save Recipe into database, open `mysql` and directly save Recipe into it. You can refer to `server/src/models/recipe.js` to find defined table entry.

Information(id, name, and content) of Recipe retrieved from MySQL is sent back to Qt interface, but picture and content of recipe used by Qt interface is stilled fetched via static files exposed by `express` (e.g. HTTP GET `localhost:3000/id/cover.jpg`).


---
# 參考文獻與資料
USB sound card: https://superuser.com/questions/989385/how-to-make-raspberry-pi-use-an-external-usb-sound-card-as-a-default

USB sound card: https://www.raspberrypi.org/forums/viewtopic.php?t=124016

Speech Recognition: https://github.com/Uberi/speech_recognition

Introduction to QtQuick: https://doc.qt.io/qt-5.10/qtquick-index.html

Cross Compile Qt5 on Rpi: http://wiki.qt.io/Raspberry_Pi_Beginners_Guide, https://wiki.qt.io/RaspberryPi2EGLFS and https://www.ics.com/blog/configuring-qt-creator-raspberry-pi

Native Build Qt5 on Rpi: https://wiki.qt.io/Native_Build_of_Qt5_on_a_Raspberry_Pi

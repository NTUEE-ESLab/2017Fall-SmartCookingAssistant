#include <BLE.h>
#include <stdio.h>
/* State variables for LED chars */
uint8_t ledValue[] = {0,0,0,0,0,0};

/* Pin number variables for LEDs on MSP432P401R LaunchPad */
uint8_t ledPin[] = {40,39,38,37,36,34};

/* Pin number variables for SR-04 on MSP432P401R LaunchPad */
uint8_t trigPin[] = {5, 9,12,23,25,27};
uint8_t echoPin[] = {6,10,11,24,26,28};

/* Declare Simple LED Service Characteristics here */

BLE_Char led1Char =
{
  {0xF1, 0xFF},                               /* 16 bit BLE UUID = 0xFFF1 */
  BLE_WRITABLE| BLE_READABLE,                 /* BLE Properties           */
  "LED 1"                                     /* User Description         */
};

BLE_Char led2Char =
{
  {0xF2, 0xFF},
  BLE_WRITABLE| BLE_READABLE,
  "LED 2"
};

BLE_Char led3Char =
{
  {0xF3, 0xFF},
  BLE_WRITABLE| BLE_READABLE,
  "LED 3"
};

BLE_Char led4Char =
{
  {0xF4, 0xFF},
  BLE_WRITABLE| BLE_READABLE,
  "LED 4"
};

BLE_Char *simpleLEDServiceChars1[]={&led1Char, &led2Char, &led3Char, &led4Char};

/* BLE LED Service is made up of LED Chars */

/* LED Service Declaration */
BLE_Service simpleLEDService1 =
{
  {0xF0, 0xFF},
  4, simpleLEDServiceChars1
};

BLE_Char led5Char =
{
  {0x01, 0xFF},
  BLE_WRITABLE| BLE_READABLE,
  "LED 5"
};

BLE_Char led6Char =
{
  {0x02, 0xFF},
  BLE_WRITABLE| BLE_READABLE,
  "LED 6"
};

/* BLE LED Service is made up of LED Chars */
BLE_Char *simpleLEDServiceChars2[] = { &led5Char, &led6Char};

/* LED Service Declaration */
BLE_Service simpleLEDService2 =
{
  {0x00, 0xFF},
  2, simpleLEDServiceChars2
};

BLE_Char *simpleLEDServiceChars[] = {&led1Char, &led2Char, &led3Char, &led4Char, &led5Char, &led6Char};


void setup() {
  Serial.begin(115200);
  ble.end();
  ble.setLogLevel(BLE_LOG_ERRORS);
  ble.begin();

  // Initalize I/O
  uint8_t i;
  for (i = 0; i < 6; i=i+1){
    pinMode(ledPin[i], OUTPUT);
    pinMode(trigPin[i], OUTPUT);
    pinMode(echoPin[i], INPUT);
  }

  /* Add and intialize LED service */
  ble.addService(&simpleLEDService1);
  ble.addService(&simpleLEDService2);
  for (i = 1; i < 6; i=i+1){
    ble.writeValue(simpleLEDServiceChars[i], ledValue[i]);
  }
  ble.writeValue(&led1Char, ledValue, 6);

  /* Start Advertising */
  ble.setAdvertName("BLE I/O Demo");
  ble.startAdvert();

  /* Print a message to the console */
  Serial.println(" BLE Energia Buttons/LED Demo");
}

// the loop routine runs over and over again forever as a task.
void loop() {
  ble.handleEvents();
  uint8_t *leds;
  int numItem=6;
  if(ble.isConnected())
  {
    // Print char value if it changed
    leds = ble.readValue_uint8_t(&led1Char,&numItem);
    for (uint8_t i=0; i<6; i=i+1)
    {
      if(ledValue[i] != leds[i])
      {
        ledValue[i] = leds[i];
        char tbs[21];
        sprintf(tbs, "LED%4d Val Changed=", i);
        Serial.print(tbs);Serial.println(ledValue[i]);
      }
    }

    // Set LEDs based on new characteristic values
    // LED1 can only be on or off, mask out all other bits
    for (uint8_t i=0;i<6;i=i+1){
      if(ledValue[i] && itemExist(i)){
        analogWrite(ledPin[i],ledValue[i]);
        delay(100);
      }
      else{
        analogWrite(ledPin[i],0);
        delay(100);
      }
    }
  }
  else{
    delay(100);
  }
}

bool itemExist(uint8_t idx)
{
    // establish variables for duration of the ping, 
  // and the distance result in inches and centimeters:
  long duration, inches, cm;
  uint8_t trig = trigPin[idx];
  uint8_t echo = echoPin[idx];
  uint8_t numTimes = 3; 
  for (int8_t i = 0; i< numTimes;i=i+1)
  {
    // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
    // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(5);
    digitalWrite(trig, LOW);
  
    // The same pin is used to read the signal from the PING))): a HIGH
    // pulse whose duration is the time (in microseconds) from the sending
    // of the ping to the reception of its echo off of an object.
    duration = pulseIn(echo, HIGH, 5000);
  
    // convert the time into a distance
    inches = microsecondsToInches(duration);
    cm = microsecondsToCentimeters(duration);
    Serial.print(idx);
    Serial.print(":  ");
    Serial.print(inches);
    Serial.print("in, ");
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
    if (cm > 18){
      return false;
    }
    if (cm == 0)
      delay(100);
    else
      return true;
  }
  return false;
}

long microsecondsToInches(long microseconds)
{
  // According to Parallax's datasheet for the PING))), there are
  // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
  // second).  This gives the distance travelled by the ping, outbound
  // and return, so we divide by 2 to get the distance of the obstacle.
  // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}

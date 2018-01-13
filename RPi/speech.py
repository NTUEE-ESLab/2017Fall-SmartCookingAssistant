#coding:utf-8
import speech_recognition as sr
import socket
import time

r = sr.Recognizer()
r.energy_threshold = 1000
r.dynamic_energy_threshold = False

HOST = '0.0.0.0'
PORT = 8001

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
s.bind((HOST, PORT))
s.listen(1)

print 'Server start at: %s:%s' %(HOST, PORT)
print 'wait for connection...'

def parse_en(message):
    direction_flag = False
    valid_noun_flag = False
    
    neg_words = ['no','don\'t']
    for w in neg_words:
        if w.decode('utf8') in message:
            return 0
    
    direction_words = ['previous','next']
    direction_values = [-1,1]
    for w,v in zip(direction_words,direction_values):
        if w.decode('utf8') in message:
            direction_flag = True
            direction_value = v

    valid_noun = ['page','step']
    for w in valid_noun:
        if w.decode('utf8') in message:
            valid_noun_flag = True

    if valid_noun_flag and direction_flag:
            return direction_value
    else:
        return 0


while True:
    conn, addr = s.accept()
    print 'Connected by ', addr
    with sr.Microphone() as source:
        r.adjust_for_ambient_noise(source)
    while True:
        with sr.Microphone() as source:
            audio_valid_flag = False
            while not audio_valid_flag:
                try:
                    print 'listening..'
                    audio = r.listen(source,timeout = 2)
                    audio_valid_flag = True
                except sr.WaitTimeoutError:
                    print('error')

            print 'processing'
        try:    
            message = r.recognize_google(audio, language = 'en-US')
        except:
            message = "Cannot recognize"
       
        print(message)
        command = parse_en(message)
        print(command)
        if command != 0:
            conn.send(str(command))
        time.sleep(0.5)


    

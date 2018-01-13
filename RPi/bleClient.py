# from __future__ import print_function
import socket
from gattlib import GATTRequester, GATTResponse
HOST = '0.0.0.0'
PORT = 8002
address = "A0:E6:F8:BD:90:01"
requester = GATTRequester(address)

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
s.bind((HOST, PORT))
s.listen(1)
print 'Server start at: %s:%s' %(HOST, PORT)
print 'wait for connection...'
while True:
    conn, addr = s.accept()
    print'Connected by ', addr
    while True:
        mspState = conn.recv(1024)
        print mspState # should be something like [255,255,0,255] 
        print type(mspState)
        arr = [0,0,0,0,0,0]
        for i in range(3):
            if str(i) in mspState:
                arr[i+3] = 255
        mspState = conn.recv(1024)
        print mspState # should be something like [255,255,0,255] 
        for i in range(3):
            if str(i) in mspState:
                arr[i] = 255
        print arr
        requester.write_by_handle(0x001e,str(bytearray(arr)))

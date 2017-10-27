from subprocess import call

import product_pb2

# client
import socket

# funtion of client entering
def ProtobufByClient(requestmsg):
    print "--------"
    requestmsg.RFQID = raw_input("Please enter RFQ_ID ... (e.g.: 1 )\n")
    requestmsg.accountID = raw_input('Please enter AccountID ... (e.g.: 001 )\n')
    requestmsg.productNumber = raw_input('Please enter ProductNumber ... (e.g.: 1 / 2 / 3)\n')
    requestmsg.productCategory = raw_input('Please enter ProductCategory ... (e.g.: (1) apple/ banana/ (2) beef/ chicken/ (3) milk/ yogurt )\n')
    requestmsg.quantity = int(raw_input('Please enter Quantity ... (e.g.: 10 )\n'))
    return requestmsg

print "-------------- Welcome to RFQ ------------------"

newReplymsg = product_pb2.replyMsg()    # convient to receive replymsg from server

requestmsg = product_pb2.requestMsg()

client_request = {}
HOST = '127.0.0.1'                                  # The remote host
PORT = 50007                                       # The same port as used by the server
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))
print "-------------- Connect with server ------------------"
print "Use this format: RFQ_ID, Account ID, ProductNumber, ProductCategory, Quantity.    (e.g.: 1,001,2,apple,5)"
connectFlag = True

while connectFlag:
    s.sendall(ProtobufByClient(requestmsg).SerializeToString())
    data = s.recv(1024) # change type of clientmsg to be dict
    newReplymsg.ParseFromString(data)

    print 'Received: ', newReplymsg

s.close()


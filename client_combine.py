# client
import json, socket,product_pb2


def JsonByClient(client_request):
    client_request["RFQ ID"] = raw_input("Please enter RFQ_ID ... (e.g.: 1 )\n")
    client_request["Account ID"] = raw_input('Please enter AccountID ... (e.g.: 001 )\n')
    client_request["Product Number"]= raw_input('Please enter ProductNumber ... (e.g.: 1 / 2 / 3)\n')
    client_request["Product Category"] = raw_input('Please enter ProductCategory ... (e.g.: (1) apple/ banana/ (2) beef/ chicken/ (3) milk/ yogurt )\n')
    client_request["Quantity"] = int(raw_input('Please enter Quantity ... (e.g.: 10 )\n'))
    return client_request

# funtion of client entering
def ProtobufByClient(requestmsg):
    requestmsg.RFQID = raw_input("Please enter RFQ_ID ... (e.g.: 1 )\n")
    requestmsg.accountID = raw_input('Please enter AccountID ... (e.g.: 001 )\n')
    requestmsg.productNumber = raw_input('Please enter ProductNumber ... (e.g.: 1 / 2 / 3)\n')
    requestmsg.productCategory = raw_input('Please enter ProductCategory ... (e.g.: (1) apple/ banana/ (2) beef/ chicken/ (3) milk/ yogurt )\n')
    requestmsg.quantity = int(raw_input('Please enter Quantity ... (e.g.: 10 )\n'))
    return requestmsg

print "-------------- Welcome to RFQ ------------------"

# # method 2: {"RFQ_ID": 1, "Account ID": 001, "Product Number": 2, "Product Category": "beef", "Quantity": 5}
# client_request = {}
# client_request["RFQ ID"] = "1"
# client_request["Account ID"] = "001"
# client_request["Product Number"] = "1"
# client_request["Product Category"] = "apple"
# client_request["Quantity"] = 10
# jsonMsg = json.dumps(client_request)
# print "jsonStr: ",jsonMsg

newReplymsg = product_pb2.replyMsg()    # convient to receive replymsg from server
requestmsg = product_pb2.requestMsg()
client_request = {}


HOST = '18.216.94.47'                                  # The remote host
PORT = 10007                                        # The same port as used by the server

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))
print "-------------- Connect with server ------------------"
print "Use this format: RFQ_ID, Account ID, ProductNumber, ProductCategory, Quantity.    (e.g.: 1,001,2,apple,5)"
connectFlag = True

while connectFlag:

    jsonMsg = json.dumps(JsonByClient(client_request))
    s.sendall(jsonMsg)
    data = json.loads(s.recv(1024))  # change type of clientmsg to be dict
    print 'Received: ', data
    print '-------------------------------------------------------------'

s.close()


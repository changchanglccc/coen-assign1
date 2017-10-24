# client
import json, socket,requests


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


client_request = {}
HOST = '127.0.0.1'                                  # The remote host
PORT = 50007                                        # The same port as used by the server
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))
print "-------------- Connect with server ------------------"
print "Use this format: RFQ_ID, Account ID, ProductNumber, ProductCategory, Quantity.    (e.g.: 1,001,2,apple,5)"
connectFlag = True

while connectFlag:
    RFQ_ID = raw_input('Please enter RFQ_ID ... (e.g.: 1 )\n')
    client_request["RFQ ID"] = RFQ_ID
    AccountID = raw_input('Please enter AccountID ... (e.g.: 001 )\n')
    client_request["Account ID"] = AccountID
    ProductNumber = raw_input('Please enter ProductNumber ... (e.g.: 1 / 2 / 3)\n')
    client_request["Product Number"] = ProductNumber
    ProductCategory = raw_input('Please enter ProductCategory ... (e.g.: (1) apple/ banana/ (2) beef/ chicken/ (3) milk/ yogurt )\n')
    client_request["Product Category"] = ProductCategory
    Quantity = raw_input('Please enter Quantity ... (e.g.: 10 )\n')
    client_request["Quantity"] = Quantity
    jsonMsg = json.dumps(client_request)
    # print jsonMsg
    s.sendall(jsonMsg)
    # data = s.recv(1024)
    # print data
    data = json.loads(s.recv(1024))                               # change type of clientmsg to be dict
    print 'Received: ', data
    print '-------------------------------------------------------------'

s.close()









# request = ""
# jsondata = {}
# pbdata = ""
# reply = ""

#
# def getRequestFromClient():
#     return request
#
# def changeToJSON():
#     return jsondata
#
# def changeTOProtocolBuff():
#     return pbdata
#
# def sentRequest():
#
#
# def showReply(reply):
#     for item in reply:
#         print item + " "






# client_list = []
# client_dict ={}

# if __name__ == '__main__':
#     print "-------------- Welcome to RFQ ------------------"
#     print "Use this format: RFQ_ID, Account_ID, ProductNumber, ProductCategory, Quantity"
#     print 'e.g.: 1,001,2,beef,5'
#
# #     client_input = raw_input("--------Please enter your Request-----------\n\n")
# #     client_split= client_input.split(',')
# #
# #
# # # use json data to communicate
# #     client_list = client_split[1:client_split.__len__()]
# #     client_list = tuple(client_list)
# #     print client_split
#
#     # method 2: {"RFQ_ID": 1, "Account ID": 001, "Product Number": 2, "Product Category": "beef", "Quantity": 5}
#     client_request = {}
#     client_request["RFQ ID"] = "1"
#     client_request["Account ID"] = "001"
#     client_request["Procuct Number"] = "1"
#     client_request["Product Category"] = "beef"
#     client_request["Quantity"] = 5
#     jsonMsg = json.dumps(client_request)
#     print "jsonStr: ",jsonMsg

# sent jsonMsg to server





# Server

import socket, json, product_pb2

# match json data with json file
def match_json(clientMsg,dict):
    reply_mid=[]    #store [price. period]
    reply=[]        #store [[price. period],[price2. period2]]
    a = []
    print "========= check ==========="
    for x in datadict:                                                      # match product number
        # print 'x is ',x
        if clientMsg.get("Product Number") == x:
            for y in datadict[x]:                                           # macch product category
                # print 'y is ', y
                if clientMsg.get("Product Category") == y:
                    # print 'datadict[x][y] is ',datadict[x][y]
                    for z in datadict[x][y]:                                # compare quantity
                        a.append(z[0])
                        # print 'clientMsg.get("Quantity")', clientMsg.get("Quantity")
                        if int(clientMsg.get("Quantity")) <= int(z[0]):
                            print 'z0: ',z[0]
                            reply_mid.append(z[1])
                            reply_mid.append(z[2])
                            reply.append(reply_mid)
                            reply_mid=[]                                    #clear the reply_mid list
                            print "reply_mid",reply_mid #not access
                        else:
                            reply =[]
                            reply.append('------ !!! We dont have enough products, the maximum is %s !!!-------' % max(a))
    return reply

# maximum algorithm
def max(a):
    max_i = 0
    for i in a:
        if i > max_i:
            max_i = i
    return max_i

# match Protocol buffer data with json file
def match_protobuf(clientMsg,dict,replymsg):
    a = []
    print "========= check ==========="
    for x in datadict:                                                      # match product number
        # print 'x is ',x
        if clientMsg.productNumber == x:
            for y in datadict[x]:
                if clientMsg.productCategory == y:
                    for z in datadict[x][y]:                                # compare quantity
                        a.append(z[0])
                        if int(clientMsg.quantity) <= int(z[0]):
                            print 'z0: ',z[0]
                            replymsg.unitPrice = z[1]
                            replymsg.validationPeriod = z[2]
                        else:
                            replymsg.unitPrice = "$--"
                            replymsg.validationPeriod = "We dont have enough products now... "
    return replymsg


print "-------------- Start RFQ Server ------------------"

newRequestmsg = product_pb2.requestMsg()
replymsg = product_pb2.replyMsg()

HOST = '18.216.94.47'                 # Symbolic name meaning all available interfaces
PORT = 50007              # Arbitrary non-privileged port


s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((HOST, PORT))
s.listen(2)
conn, addr = s.accept()
print 'Connected by', addr

# #read database, open data.json file
filename = 'data.json'
with open(filename, 'r') as data_file:
    datadict = json.load(data_file)
    #print "datadict is : ",datadict
    data_file.close()

while 1:
    clientmsg = conn.recv(1024)     #type of clientmsg is string
    if not clientmsg: break
    clientMsg = json.loads(clientmsg)  # change type of clientmsg to be dict
    reply = match_json(clientMsg, datadict)
    print  'my reply   ', reply
    server_msg = json.dumps(reply)
    print server_msg

    conn.sendall(server_msg)

conn.close()




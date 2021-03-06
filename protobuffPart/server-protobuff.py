# Server Protobuff

import product_pb2
import socket, json

# # match Protocol buffer data with json file
def match_protobuf(clientMsg,dict,replymsg):
    replymsg = product_pb2.replyMsg()
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
                            return replymsg
                        else:
                            replymsg.unitPrice = "$--"
                            replymsg.validationPeriod = "We dont have enough products now... "
                else:
                    print "HERE---------"
                    replymsg.unitPrice = "$--"
                    if not replymsg.validationPeriod:
                        replymsg.validationPeriod = "Your product category is wrong, please enter again... "
        else:
            replymsg.unitPrice = "$--"
            if not replymsg.validationPeriod:
                replymsg.validationPeriod = "Your product category is wrong, please enter again... "
    return replymsg


print "-------------- Start RFQ Server ------------------"

newRequestmsg = product_pb2.requestMsg()
# replymsg = product_pb2.replyMsg()


HOST = '127.0.0.1'                 # Symbolic name meaning all available interfaces
PORT = 50007              # Arbitrary non-privileged port
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((HOST, PORT))
s.listen(1)
conn, addr = s.accept()
print 'Connected by', addr
while 1:
    clientmsg = conn.recv(1024)     #type of cl11ientmsg is string
    if not clientmsg: break
    #clientmsg.ParseFromString()
    # print "Client request is : ", clientmsg
    newRequestmsg.ParseFromString(clientmsg)
    #read database
    filename = '../data.json'
    with open(filename, 'r') as data_file:
        datadict = json.load(data_file)
        #print "datadict is : ",datadict
    data_file.close()
    replymsg = product_pb2.replyMsg()
    replymsg = match_protobuf(newRequestmsg,datadict,replymsg)
    protobuf_data = replymsg.SerializeToString()
    conn.sendall(protobuf_data)

conn.close()


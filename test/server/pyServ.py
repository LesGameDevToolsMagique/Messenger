import SocketServer

HOST = "localhost"
PORT = 12321

# this server uses ThreadingMixIn - one thread per connection                                                      
# replace with ForkMixIn to spawn a new process per connection                                                     

class EchoServer(SocketServer.ThreadingMixIn, SocketServer.TCPServer):
        # no need to override anything - default behavior is just fine                                             
        pass

class EchoRequestHandler(SocketServer.StreamRequestHandler):
        def handle(self):
                print "connection from %s" % self.client_address[0]
                self.data = self.request.recv(1024).strip()
                print "{} wrote:".format(self.client_address[0])
                print self.data
                self.request.sendall(self.data)
                print "%s disconnected" % self.client_address[0]


# Create the server                                                                                                
server = EchoServer((HOST, PORT), EchoRequestHandler)

# Activate the server; this will keep running until you                                                            
# interrupt the program with Ctrl-C                                                                                
print "server listening on %s:%s" % server.server_address
server.serve_forever()

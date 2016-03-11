//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#ifndef     MESSENGER_CONNECTIONMANAGER_H
#define     MESSENGER_CONNECTIONMANAGER_H

#include    "../../../Interface/IConnection.h"

#include    <string>

#include    <netdb.h>
#include    <sys/types.h>
#include    <sys/socket.h>

class                       ConnectionManager : public IConnection
{
protected:
    int                     sock_fd;
    std::string             ip_address;
    unsigned int            port;
    struct sockaddr_in      cnt_addr;

public:
    ConnectionManager(const std::string &ip_address, const unsigned int port);
    virtual ~ConnectionManager();

    virtual int             connection();
    virtual void            disconnection();

    const int               getSockFd() const;
    const std::string       &getIpAddress() const;
    const unsigned int      getPort() const;
    const struct hostent    *getHostName() const;

private:
    void                    createSocket(const int domain, const int type, const int protocol = 0);
    void                    closeSocket();

    void                    addrConfig(const int domain);
};


#endif  /*  MESSENGER_CONNECTIONMANAGER_H   */

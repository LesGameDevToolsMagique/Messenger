//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#ifndef     MESSENGER_CLIENT_H
#define     MESSENGER_CLIENT_H

#include    "../../Interface/IMessenger.h"

class               Client : public IMessenger
{
public:
    Client();
    virtual ~Client();

    virtual int     sendMessage(const int sock_fd,
                            const void *msg, const unsigned int msg_size,
                            const unsigned int flags = 0,
                            const struct sockaddr *to = nullptr);
    virtual void *receiveMessage(const int sock_fd,
                                 const unsigned int read_size = 4096,
                                 const unsigned int flags = 0,
                                 struct sockaddr *from = nullptr, socklen_t *from_size = 0);
};


#endif  /*  MESSENGER_CLIENT_H  */

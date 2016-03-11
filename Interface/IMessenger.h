//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#ifndef     MESSENGER_IMESSENGER_H
#define     MESSENGER_IMESSENGER_H

#include    <sys/types.h>
#include    <sys/socket.h>

class               IMessenger
{
public:
    virtual ~IMessenger() {};

    virtual int     sendMessage(const int sock_fd,
                                const void *msg, const unsigned int msg_size,
                                const int flags = 0,
                                const struct sockaddr *to = nullptr) = 0;
    virtual void    *receiveMessage(const int sock_fd,
                                    const unsigned int read_size = 4096,
                                    const int flags = 0,
                                    struct sockaddr *from = nullptr, socklen_t *from_size = nullptr) = 0;
};

#endif  /*  MESSENGER_IMESSENGER_H  */

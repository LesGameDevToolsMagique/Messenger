//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#ifndef     MESSENGER_MESSAGEMANAGER_H
#define     MESSENGER_MESSAGEMANAGER_H

#include    "../../../Interface/IMessenger.h"

class               MessageManager : public IMessenger
{
public:
    MessageManager();
    virtual ~MessageManager();

    virtual int     sendMessage(const int sock_fd,
                                const void *msg, const unsigned int msg_size,
                                const int flags = 0,
                                const struct sockaddr *to = nullptr);
    virtual void    *receiveMessage(const int sock_fd,
                                    const unsigned int read_size = 4096,
                                    const int flags = 0,
                                    struct sockaddr *to = nullptr, socklen_t *to_size = nullptr);
};


#endif  /*  MESSENGER_MESSAGEMANAGER_H  */

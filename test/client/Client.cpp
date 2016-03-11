//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include    "Client.h"

Client::Client()
{
    this->msg_manager = new MessageManager();
}

Client::~Client()
{
    delete this->msg_manager;
}

/*
 *  Getter / Setter
 */

IMessenger  *Client::getMessageManager() const
{
    return this->msg_manager;
}

/*
 *  Connection / Disconnection functions
 */

int         Client::connection()
{
    return 0;
}

int         Client::disconnection()
{
    return 0;
}

/*
 *  Message functions
 */

int         Client::sendMessage(const int sock_fd,
                                const void *msg, const unsigned int msg_size,
                                const unsigned int flags,
                                const sockaddr *to)
{
    return 0;
}

void        *Client::receiveMessage(const int sock_fd,
                                    const unsigned int read_size,
                                    const unsigned int flags,
                                    sockaddr *from, socklen_t *from_size)
{
    return nullptr;
}

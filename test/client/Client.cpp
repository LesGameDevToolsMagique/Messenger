//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include    "Client.h"

Client::Client()
{

}

Client::~Client()
{

}

/*
 *  Message functions
 */

int Client::sendMessage(const int sock_fd,
                        const void *msg, const unsigned int msg_size,
                        const unsigned int flags,
                        const sockaddr *to)
{
    return 0;
}

void *Client::receiveMessage(const int sock_fd,
                             const unsigned int read_size,
                             const unsigned int flags,
                             sockaddr *from, socklen_t *from_size)
{
    return nullptr;
}
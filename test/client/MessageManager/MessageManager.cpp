//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include    "MessageManager.h"

MessageManager::MessageManager()
{

}

MessageManager::~MessageManager()
{

}

/*
 *
 */

int         MessageManager::sendMessage(const int sock_fd,
                                        const void *msg, const unsigned int msg_size,
                                        const int flags, const sockaddr *to)
{
    int r_func = ((int)sendto(sock_fd, msg, msg_size, flags,
                              to, ((socklen_t)(to == nullptr ? 0 : sizeof(struct sockaddr)))));

    if (r_func == -1) {
        return -1;
    } else if (r_func != msg_size) {
        return 0;
    }

    return 1;
}

void        *MessageManager::receiveMessage(const int sock_fd,
                                            const unsigned int read_size,
                                            const int flags,
                                            struct sockaddr *to, socklen_t *to_size)
{
    void *msg;

    if (recvfrom(sock_fd, msg, read_size, flags, to, (to == nullptr ? nullptr : to_size)) == -1) {
        return nullptr;
    }

    return msg;
}
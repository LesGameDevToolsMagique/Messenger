//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include    "ConnectionManager.h"

ConnectionManager::ConnectionManager(const std::string &ip_address, const unsigned int port)
{
    this->sock_fd = 0;
    this->ip_address = ip_address;
    this->port = port;
}

ConnectionManager::~ConnectionManager()
{
    this->closeSocket();
}

/*
 *  Getter / Setter
 */

const int           ConnectionManager::getSockFd() const
{
    return this->sock_fd;
}

const std::string   &ConnectionManager::getIpAddress() const
{
    return this->ip_address;
}

const unsigned int  ConnectionManager::getPort() const
{
    return this->port;
}

/*
 *  Connection / Deconnection functions
 */

int                 ConnectionManager::connection()
{
    return connect(this->sock_fd, nullptr, 0);
}

void                ConnectionManager::disconnection()
{
    this->closeSocket();
}

/*
 *  Socket functions
 */

void                ConnectionManager::createSocket(const int domain, const int type, const int protocol)
{
    if (this->sock_fd == -1 || this->sock_fd == 0) {
        this->sock_fd = socket(domain, type, protocol);
    }
}

void                ConnectionManager::closeSocket()
{
    if (this->sock_fd != -1 || this->sock_fd != 0) {

        if (close(this->sock_fd) != -1) {
            this->sock_fd = 0;
        } else {
            this->closeSocket();
        }
    }
}
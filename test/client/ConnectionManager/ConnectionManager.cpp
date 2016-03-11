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

const int               ConnectionManager::getSockFd() const
{
    return this->sock_fd;
}

const std::string       &ConnectionManager::getIpAddress() const
{
    return this->ip_address;
}

const unsigned int      ConnectionManager::getPort() const
{
    return this->port;
}

const struct hostent    *ConnectionManager::getHostName() const
{
    return gethostbyname(this->getIpAddress().c_str());
}

/*
 *  Connection / Deconnection functions
 */

int                     ConnectionManager::connection()
{
    this->createSocket(AF_INET, SOCK_STREAM, 0);
    this->addrConfig(AF_INET);

    return connect(this->sock_fd, nullptr, 0);
}

void                    ConnectionManager::disconnection()
{
    this->closeSocket();
}

/*
 *  Socket functions
 */

void                    ConnectionManager::createSocket(const int domain, const int type, const int protocol)
{
    if (this->sock_fd == -1 || this->sock_fd == 0) {
        this->sock_fd = socket(domain, type, protocol);
    }
}

void                    ConnectionManager::closeSocket()
{
    if (this->sock_fd != -1 || this->sock_fd != 0) {

        if (close(this->sock_fd) != -1) {
            this->sock_fd = 0;
        } else {
            this->closeSocket();
        }
    }
}

void ConnectionManager::addrConfig(const int domain)
{
    this->cnt_addr.sin_family = domain;
    this->cnt_addr.sin_port = htons(this->getPort());
    this->cnt_addr.sin_addr = *((struct in_addr *) this->getHostName()->h_addr);

    bzero(&(this->cnt_addr.sin_zero), 8);
}
//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#ifndef     MESSENGER_ICONNECTION_H
#define     MESSENGER_ICONNECTION_H

#include    "sys/types.h"
#include    "sys/socket.h"

class               IConnection
{
public:
    virtual ~IConnection() {};

    virtual int     connection() = 0;
    virtual void    disconnection() = 0;
};

#endif  /*  MESSENGER_ICONNECTION_H */

//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#ifndef     MESSENGER_CLIENT_H
#define     MESSENGER_CLIENT_H

#include    "MessageManager/MessageManager.h"
#include    "ConnectionManager/ConnectionManager.h"

class               Client
{
protected:
    IMessenger      *msg_manager;
    IConnection     *cnt_manager;

public:
    Client();
    ~Client();

    IMessenger      *getMessageManager() const;
    IConnection     *getConnectionManager() const;
};


#endif  /*  MESSENGER_CLIENT_H  */

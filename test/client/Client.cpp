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

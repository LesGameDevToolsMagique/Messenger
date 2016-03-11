//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include    "Client.h"

Client::Client()
{
    this->msg_manager = new MessageManager();
    this->cnt_manager = new ConnectionManager("127.0.0.1", 12321);
}

Client::~Client()
{
    delete this->msg_manager;
    delete this->cnt_manager;
}

/*
 *  Getter / Setter
 */

IMessenger  *Client::getMessageManager() const
{
    return this->msg_manager;
}

IConnection *Client::getConnectionManager() const
{
    return this->cnt_manager;
}


//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include <iostream>
#include "test/client/Client.h"

int main()
{
    Client *client = new Client();
    /*
    client->getConnectionManager()->connection();

    client->getMessageManager()->sendMessage(((ConnectionManager *)client->getConnectionManager())->getSockFd(), "toto", 4);

    client->getMessageManager()->receiveMessage(((ConnectionManager *)client->getConnectionManager())->getSockFd());

    client->getConnectionManager()->disconnection();
    */
    delete client;

    return 0;
}

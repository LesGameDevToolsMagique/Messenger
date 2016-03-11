//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include <iostream>
#include "test/client/Client.h"

int main()
{
    Client *client = new Client();

    /*
    client->connection();

    client->getMessageManager()->sendMessage(1, "toto", 4);

    client->getMessageManager()->receiveMessage(1);

    client->disconnection();
     */

    delete client;

    return 0;
}

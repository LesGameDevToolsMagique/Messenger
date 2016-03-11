//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include <iostream>
#include "test/client/Client.h"

int main()
{
    Client *client = new Client();

    if (client->getConnectionManager()->connection() != -1) {
        void *msg = client->getMessageManager()->receiveMessage(((ConnectionManager *)client->getConnectionManager())->getSockFd());

        if (msg != nullptr) {
            std::cout << ((char *)msg) << std::endl;
        }

        // client->getMessageManager()->sendMessage(((ConnectionManager *)client->getConnectionManager())->getSockFd(), "toto", 4);

        client->getConnectionManager()->disconnection();
    }

    delete client;

    return 0;
}

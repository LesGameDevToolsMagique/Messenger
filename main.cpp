//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include <iostream>
#include "test/client/Client.h"

int main()
{
    Client *client = new Client();

    delete client;

    return 0;
}

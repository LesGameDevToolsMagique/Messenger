//
// Created by Jean-Antoine Dupont on 11/03/2016.
//

#include <iostream>
#include "Interface/IMessenger.h"
#include "test/client/Client.h"

int main()
{
    IMessenger *client = new Client();

    delete client;

    return 0;
}

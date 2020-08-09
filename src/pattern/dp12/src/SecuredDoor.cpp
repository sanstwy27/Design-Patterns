/*
 * SecuredDoor.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#include "../include/SecuredDoor.hpp"

using namespace ProxySpace;

SecuredDoor::SecuredDoor(IDoor* door) {
    // TODO Auto-generated constructor stub
    mDoor = door;
}

void SecuredDoor::open(const string &password)
{
    if(authenticate(password))
    {
        mDoor->open();
    }
    else
    {
        cout << "Big no! It ain't possible." << endl;
    }
}

void SecuredDoor::close()
{
    mDoor->close();
}

bool SecuredDoor::authenticate(const string &password)
{
    return password == "password";
}

/*
 * ProxyClient.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#include "ProxyClient.hpp"
#include "LabDoor.hpp"
#include "SecuredDoor.hpp"

using namespace ProxySpace;

void ProxyClient::ProxyTest()
{
    SecuredDoor* proxy = new SecuredDoor(new LabDoor());
    proxy->open("123");
    proxy->open("password");
}

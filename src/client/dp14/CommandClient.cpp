/*
 * CommandClient.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#include "CommandClient.hpp"
#include "Invoker.hpp"
#include "ConcreteCmdActive.hpp"
#include "ConcreteCmdInactive.hpp"

using namespace CommandSpace;

void CommandClient::CommandClientTest()
{
    ConcreteCmdInactive commandA(new Receiver());
    ConcreteCmdActive commandB(new Receiver());

    Invoker invoker;
    invoker.submit(&commandA);
    invoker.submit(&commandB);
}

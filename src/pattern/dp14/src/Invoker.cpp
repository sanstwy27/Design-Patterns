/*
 * Invoker.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#include "../include/Invoker.hpp"

using namespace CommandSpace;

void Invoker::submit(ICommand* command)
{
    if(command)
    {
        command->execute();
    }
}

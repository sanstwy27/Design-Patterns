/*
 * ConcreteCommandB.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#include <ConcreteCmdActive.hpp>
#include <iostream>

using namespace std;
using namespace CommandSpace;

ConcreteCmdActive::ConcreteCmdActive(Receiver* receiver) {
    // TODO Auto-generated constructor stub
    mReceiver = receiver;
}

void ConcreteCmdActive::execute()
{
    cout << "CommandInactive ";
    mReceiver->actionGo();
}

void ConcreteCmdActive::undo()
{
    cout << "CommandInactive ";
    mReceiver->actionCancel();
}

void ConcreteCmdActive::redo()
{
    this->execute();
}

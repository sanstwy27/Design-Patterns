/*
 * ConcreteCommandA.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#include <ConcreteCmdInactive.hpp>
#include <iostream>

using namespace std;
using namespace CommandSpace;

ConcreteCmdInactive::ConcreteCmdInactive(Receiver* receiver) {
    // TODO Auto-generated constructor stub
    mReceiver = receiver;
}

void ConcreteCmdInactive::execute()
{
    cout << "CommandActive ";
    mReceiver->actionGo();
}

void ConcreteCmdInactive::undo()
{
    cout << "CommandActive ";
    mReceiver->actionCancel();
}

void ConcreteCmdInactive::redo()
{
    this->execute();
}

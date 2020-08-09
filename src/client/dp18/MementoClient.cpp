/*
 * MementoClient.cpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "MementoClient.hpp"
#include "CareTaker.hpp"
using namespace MementoSpace;

void MementoClient::MementoTest()
{
    Originator *originator = new Originator();
    CareTaker *caretaker = new CareTaker( originator );

    originator->setState( 1 );
    caretaker->save();

    originator->setState( 2 );
    caretaker->save();

    originator->setState( 3 );
    caretaker->undo();

    std::cout << "Actual state is " << originator->getState() << "." << std::endl;

    delete originator;
    delete caretaker;
}

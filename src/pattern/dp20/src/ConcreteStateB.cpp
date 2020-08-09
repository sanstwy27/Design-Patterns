/*
 * ConcreteStateB.cpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/ConcreteStateB.hpp"

using namespace StateSpace;

ConcreteStateB::~ConcreteStateB() {
    // TODO Auto-generated destructor stub
}

void ConcreteStateB::handle()
{
    std::cout << "State B handled." << std::endl;
}

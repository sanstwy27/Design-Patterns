/*
 * ConcreteStateA.cpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/ConcreteStateA.hpp"

using namespace StateSpace;

ConcreteStateA::~ConcreteStateA() {
    // TODO Auto-generated destructor stub
}

void ConcreteStateA::handle()
{
    std::cout << "State A handled." << std::endl;
}

/*
 * ConcreteStrategyB.cpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/ConcreteStrategyB.hpp"

using namespace StrategySpace;

ConcreteStrategyB::~ConcreteStrategyB() {
    // TODO Auto-generated destructor stub
}

void ConcreteStrategyB::execute()
{
    std::cout << "ConcreteStrategyB execute" << std::endl;
}

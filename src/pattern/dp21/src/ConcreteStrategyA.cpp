/*
 * ConcreteStrategyA.cpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/ConcreteStrategyA.hpp"

using namespace StrategySpace;

ConcreteStrategyA::~ConcreteStrategyA() {
    // TODO Auto-generated destructor stub
}

void ConcreteStrategyA::execute()
{
    std::cout << "ConcreteStrategyA execute" << std::endl;
}

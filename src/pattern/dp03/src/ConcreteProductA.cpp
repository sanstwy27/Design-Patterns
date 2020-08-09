/*
 * ConcreteProductA.cpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#include <ConcreteIProductA.hpp>

using namespace FactoryMethodSpace;

ConcreteProductA::~ConcreteProductA() {
    // TODO Auto-generated destructor stub
}

string ConcreteProductA::getName()
{
    return "anOperation A";
}

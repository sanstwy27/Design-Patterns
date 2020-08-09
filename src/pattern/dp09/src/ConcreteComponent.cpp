/*
 * ConcreteComponent.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "ConcreteComponent.hpp"

#include <iostream>

using namespace std;
using namespace DecoratorSpace;

ConcreteComponent::~ConcreteComponent() {
    // TODO Auto-generated destructor stub
}

void ConcreteComponent::operation()
{
    cout << "ConcreteComponent operation()";
}

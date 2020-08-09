/*
 * Decorator.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "Decorator.hpp"

using namespace DecoratorSpace;

Decorator::~Decorator() {
    // TODO Auto-generated destructor stub
}

Decorator::Decorator(IComponent* c) {
    // TODO Auto-generated constructor stub
    mComponent = c;

}

void Decorator::operation()
{
    mComponent->operation();
}

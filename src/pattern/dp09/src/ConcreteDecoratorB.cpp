/*
 * ConcreteDecoratorB.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "ConcreteDecoratorB.hpp"

using namespace DecoratorSpace;

ConcreteDecoratorB::ConcreteDecoratorB(IComponent* c) : Decorator(c) {
    // TODO Auto-generated constructor stub
}

void ConcreteDecoratorB::operation()
{
    Decorator::operation();
    addedBehavior();
}

void ConcreteDecoratorB::addedBehavior()
{
    cout << " DecoratorB";
}

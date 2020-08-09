/*
 * ConcreteDecoratorA.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "ConcreteDecoratorA.hpp"

using namespace DecoratorSpace;

ConcreteDecoratorA::ConcreteDecoratorA(IComponent* c) : Decorator(c) {
    // TODO Auto-generated constructor stub
}

void ConcreteDecoratorA::operation()
{
    Decorator::operation();
    addedBehavior();
}

void ConcreteDecoratorA::addedBehavior()
{
    cout << " DecoratorA";
}

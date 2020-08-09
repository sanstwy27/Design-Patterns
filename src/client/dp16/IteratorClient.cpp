/*
 * IteratorClient.cpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "IteratorClient.hpp"
#include "ConcreteAggregate.hpp"

using namespace IteratorSpace;

void IteratorClient::IteratorTest()
{
    unsigned int size = 5;
    ConcreteAggregate list = ConcreteAggregate( size );
    IIterator *it = list.createIterator();
    for ( ; it->hasNext(); it->next())
    {
      std::cout << "Item value: " << it->var() << std::endl;
    }
    delete it;
}

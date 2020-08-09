/*
 * ConcreteCreator.cpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#include <ConcreteICreator.hpp>
#include <ConcreteIProductA.hpp>
#include <ConcreteIProductB.hpp>

using namespace FactoryMethodSpace;

ConcreteCreator::~ConcreteCreator() {
    // TODO Auto-generated destructor stub
}

IProduct* ConcreteCreator::createProductA()
{
    return new ConcreteProductA();
}

IProduct* ConcreteCreator::createProductB()
{
    return new ConcreteProductB();
}

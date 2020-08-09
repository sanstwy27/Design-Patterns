/*
 * ConcreteFactoryY.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#include <ConcreteFactoryY.hpp>
#include <ConcreteIAbstractProductA.hpp>
#include <ConcreteIAbstractProductB.hpp>

using namespace AbstractFactorySpace;

ConcreteFactoryY::~ConcreteFactoryY()
{

}

IAbstractProductA *ConcreteFactoryY::createProductA()
{
    return new ConcreteProductA3();
}

IAbstractProductB *ConcreteFactoryY::createProductB()
{
    return new ConcreteProductB1();
}

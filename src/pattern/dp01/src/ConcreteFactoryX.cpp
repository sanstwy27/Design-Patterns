/*
 * ConcreteFactoryX.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#include <ConcreteFactoryX.hpp>
#include <ConcreteIAbstractProductA.hpp>
#include <ConcreteIAbstractProductB.hpp>

using namespace AbstractFactorySpace;

ConcreteFactoryX::~ConcreteFactoryX()
{

}

IAbstractProductA *ConcreteFactoryX::createProductA()
{
    return new ConcreteProductA1();
}

IAbstractProductB *ConcreteFactoryX::createProductB()
{
    return new ConcreteProductB2();
}

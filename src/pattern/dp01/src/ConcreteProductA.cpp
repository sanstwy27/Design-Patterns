/*
 * ConcreteProductA.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#include <ConcreteIAbstractProductA.hpp>

using namespace AbstractFactorySpace;

ConcreteProductA1::~ConcreteProductA1()
{

}

string ConcreteProductA1::getName()
{
    return "Product A1";
}

ConcreteProductA2::~ConcreteProductA2()
{

}

string ConcreteProductA2::getName()
{
    return "Product A2";
}

ConcreteProductA3::~ConcreteProductA3()
{

}

string ConcreteProductA3::getName()
{
    return "Product A3";
}

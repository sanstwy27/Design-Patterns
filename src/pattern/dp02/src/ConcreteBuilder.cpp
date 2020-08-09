/*
 * ConcreteBuilder.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#include "ConcreteBuilder.hpp"

using namespace BuilderSpace;

void ConcreteBuilder::buildPartA()
{
    product.makePartA("PartA-Build");
}

void ConcreteBuilder::buildPartB()
{
    product.makePartB("PartB-Build");
}

void ConcreteBuilder::buildPartC()
{
    product.makePartC("PartC-Build");
}


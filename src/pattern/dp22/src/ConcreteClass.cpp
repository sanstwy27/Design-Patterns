/*
 * ConcreteClass.cpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/ConcreteClass.hpp"

using namespace TemplateMethodSpace;

ConcreteClass::~ConcreteClass() {
    // TODO Auto-generated destructor stub
}

void ConcreteClass::subMethod1()
{
    std::cout << "subMethod1()" << std::endl;
}

void ConcreteClass::subMethod2()
{
    std::cout << "subMethod2()" << std::endl;
}

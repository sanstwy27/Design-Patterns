/*
 * IAbstractClass.cpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#include "../include/IAbstractClass.hpp"

using namespace TemplateMethodSpace;

IAbstractClass::~IAbstractClass() {
    // TODO Auto-generated destructor stub
}

void IAbstractClass::templateMethod()
{
    subMethod1();
    subMethod2();
}


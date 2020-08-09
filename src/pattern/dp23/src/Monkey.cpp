/*
 * ConcreteElementA.cpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#include <Monkey.hpp>

using namespace VisitorSpace;

Monkey::~Monkey() {
    // TODO Auto-generated destructor stub
}

void Monkey::accept(IVisitor &visitor)
{
    visitor.visitMonkey(this);
}

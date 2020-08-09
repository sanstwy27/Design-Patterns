/*
 * Lion.cpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#include "../include/Lion.hpp"

using namespace VisitorSpace;

Lion::~Lion()
{

}

void Lion::accept(IVisitor &visitor)
{
    visitor.visitLion(this);
}

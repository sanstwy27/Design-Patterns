/*
 * Dolphin.cpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#include "Dolphin.hpp"

using namespace VisitorSpace;

Dolphin::~Dolphin()
{

}

void Dolphin::accept(IVisitor &visitor)
{
    visitor.visitDolphin(this);
}

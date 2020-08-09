/*
 * Facade.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "../include/Facade.hpp"

using namespace FacadeSpace;

Facade::Facade() : mSubsystemAPtr(), mSubsystemBPtr(), mSubsystemCPtr() {
    // TODO Auto-generated constructor stub

}

void Facade::operation1()
{
    mSubsystemAPtr->subOperation();
    mSubsystemBPtr->subOperation();
}

void Facade::operation2()
{
    mSubsystemCPtr->subOperation();
}

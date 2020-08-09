/*
 * FacadeClient.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "FacadeClient.hpp"
#include "Facade.hpp"

using namespace FacadeSpace;

void FacadeClient::FacadeTest()
{
    Facade facade;
    facade.operation1();
    facade.operation2();
}

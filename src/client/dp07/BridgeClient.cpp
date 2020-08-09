/*
 * BridgeClient.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "BridgeClient.hpp"
#include "People.hpp"
#include "SimpleDrawing.hpp"

using namespace BridgeSpace;

void BridgeClient::BridgeTest()
{
    IAnimal* people = new People(new SimpleDrawing());
    people->move();
    people->turn();
}

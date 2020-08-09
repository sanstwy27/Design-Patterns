/*
 * StrategyClient.cpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#include "StrategyClient.hpp"
#include "StrategyContext.hpp"
#include "ConcreteStrategyA.hpp"

using namespace StrategySpace;

void StrategyClient::StrategyTest()
{
    StrategyContext context(new ConcreteStrategyA());
    context.execute();
}

/*
 * Context.cpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#include <StrategyContext.hpp>

using namespace StrategySpace;

StrategyContext::StrategyContext(IStrategy* state) {
    // TODO Auto-generated constructor stub
    mStrategy = state;
}

StrategyContext::~StrategyContext() {
    // TODO Auto-generated destructor stub
    delete mStrategy;
}

void StrategyContext::execute()
{
    mStrategy->execute();
}





/*
 * StateClient.cpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#include <StrategyContext.hpp>
#include "StateClient.hpp"
#include "StateContext.hpp"
#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"

using namespace StateSpace;

void StateClient::StateTest()
{
    StateContext* context = new StateContext();

    context->setState( new ConcreteStateA() );
    context->request();

    context->setState( new ConcreteStateB() );
    context->request();

    delete context;
}

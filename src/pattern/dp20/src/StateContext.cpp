/*
 * Context.cpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#include <StateContext.hpp>

using namespace StateSpace;

StateContext::StateContext() : mState() {
    // TODO Auto-generated constructor stub

}

StateContext::~StateContext() {
    // TODO Auto-generated destructor stub
    delete mState;
}

void StateContext::setState(IState* state)
{
    mState = state;
}

IState* StateContext::getState()
{
    return mState;
}

void StateContext::request()
{
    mState->handle();
}

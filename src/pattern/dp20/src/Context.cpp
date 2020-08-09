/*
 * Context.cpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#include "../include/Context.hpp"

using namespace StateSpace;

Context::Context() : mState() {
    // TODO Auto-generated constructor stub

}

Context::~Context() {
    // TODO Auto-generated destructor stub
    delete mState;
}

void Context::setState(IState* state)
{
    mState = state;
}

IState* Context::getState()
{
    return mState;
}

void Context::request()
{
    mState->handle();
}

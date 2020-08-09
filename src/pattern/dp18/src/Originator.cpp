/*
 * Originator.cpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#include "../include/Originator.hpp"

using namespace MementoSpace;

void Originator::setState(int state)
{
    mState = state;
}

int Originator::getState()
{
    return mState;
}
void Originator::setMemento(Memento* memo)
{
    mState = memo->getState();
}

Memento* Originator::getMemento()
{
    return new Memento(mState);
}

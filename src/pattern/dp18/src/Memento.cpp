/*
 * Memento.cpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#include "../include/Memento.hpp"

using namespace MementoSpace;

Memento::Memento(int state) {
    // TODO Auto-generated constructor stub
    mState = state;
}

void Memento::setState(int state)
{
    mState = state;
}

int Memento::getState()
{
    return mState;
}

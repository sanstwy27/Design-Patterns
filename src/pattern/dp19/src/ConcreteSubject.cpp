/*
 * ConcreteSubject.cpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#include "../include/ConcreteSubject.hpp"

using namespace ObserverSpace;

ConcreteSubject::~ConcreteSubject() {
    // TODO Auto-generated destructor stub
}

void ConcreteSubject::attach(IObserver* observer)
{
    mObservers.push_back(observer);
}

void ConcreteSubject::detach(int index)
{
    mObservers.erase(mObservers.begin() + index);
}

void ConcreteSubject::notify()
{
    for(unsigned int i = 0; i < mObservers.size(); i++)
    {
        mObservers.at(i)->update(this);
    }
}

int ConcreteSubject::getState()
{
    return mSubjectState;
}

void ConcreteSubject::setState(int state)
{
    mSubjectState = state;
}

/*
 * ConcreteObserver.cpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/ConcreteObserver.hpp"
#include "../include/ConcreteSubject.hpp"

using namespace ObserverSpace;

ConcreteObserver::ConcreteObserver(int state) {
    // TODO Auto-generated constructor stub
    mObserver = state;
}

ConcreteObserver::~ConcreteObserver() {
    // TODO Auto-generated destructor stub
}

int ConcreteObserver::getState()
{
    return mObserver;
}

void ConcreteObserver::update(ISubject *subject)
{
    mObserver = subject->getState();
    std::cout << "Observer state updated." << std::endl;
}

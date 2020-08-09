/*
 * ObserverClient.cpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "ObserverClient.hpp"
#include "ConcreteObserver.hpp"
#include "ConcreteSubject.hpp"
using namespace ObserverSpace;

void ObserverClient::ObserverTest()
{
    ConcreteObserver observer1(1);
    ConcreteObserver observer2(2);

    std::cout << "Observer 1 state: " << observer1.getState() << std::endl;
    std::cout << "Observer 2 state: " << observer2.getState() << std::endl;

    ISubject *subject = new ConcreteSubject();
    subject->attach(&observer1);
    subject->attach(&observer2);

    subject->setState( 10 );
    subject->notify();

    std::cout << "Observer 1 state: " << observer1.getState() << std::endl;
    std::cout << "Observer 2 state: " << observer2.getState() << std::endl;

    delete subject;
}

/*
 * MediatorClient.cpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#include "MediatorClient.hpp"
#include "ConcreteColleague.hpp"
#include "ConcreteMediator.hpp"

using namespace MediatorSpace;

void MediatorClient::MediatorTest()
{
    IMediator *mediator = new ConcreteMediator();
    IColleague *c1 = new ConcreteColleague(mediator, 1);
    IColleague *c2 = new ConcreteColleague(mediator, 2);
    IColleague *c3 = new ConcreteColleague(mediator, 3);

    mediator->add(c1);
    mediator->add(c2);
    mediator->add(c3);

    c1->send("Hi!");
    c3->send("Hello!");

    delete mediator;
}

/*
 * DecoratorClient.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "DecoratorClient.hpp"
#include "ConcreteComponent.hpp"
#include "ConcreteDecoratorA.hpp"
#include "ConcreteDecoratorB.hpp"

using namespace DecoratorSpace;

void DecoratorClient::DecoratorTest()
{
    IComponent* cc = new ConcreteComponent();
    IComponent* da = new ConcreteDecoratorA(cc);
    IComponent* db = new ConcreteDecoratorA(da);
    db->operation();
    delete cc;
    delete da;
    delete db;
}

/*
 * PrototypeClient.cpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#include "./PrototypeClient.hpp"
#include "ConcretePrototype.hpp"

using namespace PrototypeSpace;

void PrototypeClient::PrototypeTest()
{
    IProto* prototype = new ConcretePrototype("ver 0");
    cout << prototype->getVersion() << endl;
    IProto* clone1 = prototype->clone();
    cout << clone1->getVersion() << endl;
    IProto* clone2 = clone1->clone();
    cout << clone2->getVersion() << endl;
}

/*
 * ConcretePrototype.cpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#include "../include/ConcretePrototype.hpp"

using namespace PrototypeSpace;

ConcretePrototype::ConcretePrototype()
{

}

ConcretePrototype::ConcretePrototype(string version)
{
    mVersion = version;
}

ConcretePrototype::~ConcretePrototype() {
    // TODO Auto-generated destructor stub
}

string ConcretePrototype::getVersion()
{
    return mVersion;
}

void ConcretePrototype::setVersion(string version)
{
    mVersion = version;
}

IProto* ConcretePrototype::clone()
{
    IProto* clone = new ConcretePrototype();
    clone->setVersion(mVersion + ".0");
    return clone;
}

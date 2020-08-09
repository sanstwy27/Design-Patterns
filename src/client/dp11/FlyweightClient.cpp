/*
 * FlyweightClient.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#include "FlyweightClient.hpp"
#include "FlyweightFactory.hpp"
#include "UnsharedConcreteFlyweight.hpp"

using namespace FlyweightSpace;

void FlyweightClient::FlyweightTest()
{
    enum state { ST_A, ST_B, ST_C };
    UnsharedConcreteFlyweight unshared(3);
    unshared.operation(ST_A);

    FlyweightFactory *factory = new FlyweightFactory;
    factory->getFlyweight(1)->operation(ST_B);
    factory->getFlyweight(2)->operation(ST_C);
    delete factory;
}

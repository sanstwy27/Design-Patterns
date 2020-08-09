/*
 * BuilderTest.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#include "BuilderClient.hpp"

#include "Director.hpp"
#include "ConcreteBuilder.hpp"

using namespace BuilderSpace;

void BuilderClient::BuilderTest()
{
    Director director;
    director.set( new ConcreteBuilder );

    director.simpleConstructor();
    Product product1 = director.get();
    cout << "simple product parts: " << product1.get() << endl;

    director.fullConstructor();
    Product product2 = director.get();
    cout << "full product parts: " << product2.get() << endl;
}

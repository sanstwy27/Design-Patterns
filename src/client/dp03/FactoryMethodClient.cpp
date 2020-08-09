/*
 * FactoryMethodClient.cpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#include <ConcreteICreator.hpp>
#include "FactoryMethodClient.hpp"

using namespace FactoryMethodSpace;

void FactoryMethodClient::FactoryMethodTest()
{
    ICreator* creator = new ConcreteCreator();

    IProduct* A = creator->createProductA();
    std::cout << "Product: " << A->getName() << std::endl;
    delete A;

    IProduct* B = creator->createProductB();
    std::cout << "Product: " << B->getName() << std::endl;
    delete B;
}

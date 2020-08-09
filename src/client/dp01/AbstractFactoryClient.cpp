/*
 * AbstractFactoryClient.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#include <iostream>

#include <AbstractFactoryClient.hpp>
#include <ConcreteFactoryX.hpp>
#include <ConcreteFactoryY.hpp>

using namespace std;
using namespace AbstractFactorySpace;

void AbstractFactoryClient::AbstractFactoryTest()
{
    cout << "...Factory X" << endl;
    ConcreteFactoryX *factoryX = new ConcreteFactoryX();
    IAbstractProductA *aX = factoryX->createProductA();
    IAbstractProductB *bX = factoryX->createProductB();
    cout << aX->getName() << endl;
    cout << bX->getName() << endl;
    delete aX;
    delete bX;
    delete factoryX;

    cout << "...Factory Y" << endl;
    ConcreteFactoryY *factoryY = new ConcreteFactoryY();
    IAbstractProductA *aY = factoryY->createProductA();
    IAbstractProductB *bY = factoryY->createProductB();
    cout << aY->getName() << endl;
    cout << bY->getName() << endl;
    delete aY;
    delete bY;
    delete factoryY;
}

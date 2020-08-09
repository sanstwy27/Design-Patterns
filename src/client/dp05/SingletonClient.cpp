/*
 * SingletonClient.cpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#include "SingletonClient.hpp"
#include "Singleton.hpp"

using namespace SingletonSpace;

void SingletonClient::SingletonTest()
{
    cout << Singleton::get()->operation() << endl;
}

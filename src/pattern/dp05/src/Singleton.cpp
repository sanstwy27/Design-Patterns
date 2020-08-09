/*
 * Singleton.cpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#include "../include/Singleton.hpp"

using namespace SingletonSpace;

Singleton* Singleton::uniqueInstance = nullptr;

Singleton::Singleton() {
    // TODO Auto-generated constructor stub

}

Singleton* Singleton::get()
{
    if(!uniqueInstance)
    {
        uniqueInstance = new Singleton();
    }
    return uniqueInstance;
}

string Singleton::operation()
{
    return "SingletonOperation()";
}

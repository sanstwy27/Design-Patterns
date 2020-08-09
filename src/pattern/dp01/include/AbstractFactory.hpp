/*
 * AbstractFactory.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef ABSTRACT_FACTORY_HPP_
#define ABSTRACT_FACTORY_HPP_

#include "./AbstractProductA.hpp"
#include "./AbstractProductB.hpp"

namespace AbstractFactorySpace {

class AbstractFactory
{
public:
    virtual ~AbstractFactory();

    virtual AbstractProductA *createProductA() = 0;
    virtual AbstractProductB *createProductB() = 0;
};

}

#endif

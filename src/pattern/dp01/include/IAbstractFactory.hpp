/*
 * AbstractFactory.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef ABSTRACT_FACTORY_HPP_
#define ABSTRACT_FACTORY_HPP_

#include <IAbstractProductA.hpp>
#include <IAbstractProductB.hpp>

namespace AbstractFactorySpace {

class IAbstractFactory
{
public:
    virtual ~IAbstractFactory();

    virtual IAbstractProductA *createProductA() = 0;
    virtual IAbstractProductB *createProductB() = 0;
};

}

#endif

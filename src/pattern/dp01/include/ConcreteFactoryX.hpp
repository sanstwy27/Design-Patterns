/*
 * ConcreteFactoryX.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef CONCRETE_FACTORY_X_HPP_
#define CONCRETE_FACTORY_X_HPP_

#include <IAbstractFactory.hpp>
#include <IAbstractProductA.hpp>
#include <IAbstractProductB.hpp>

namespace AbstractFactorySpace {

    class ConcreteFactoryX : virtual public IAbstractFactory
    {
    public:
        virtual ~ConcreteFactoryX();

        IAbstractProductA *createProductA();
        IAbstractProductB *createProductB();
    };

}

#endif

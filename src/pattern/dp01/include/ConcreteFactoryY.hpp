/*
 * ConcreteFactoryY.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef CONCRETE_FACTORY_Y_HPP_
#define CONCRETE_FACTORY_Y_HPP_

#include <IAbstractFactory.hpp>
#include <IAbstractProductA.hpp>
#include <IAbstractProductB.hpp>

namespace AbstractFactorySpace {

    class ConcreteFactoryY : virtual public IAbstractFactory
    {
    public:
        virtual ~ConcreteFactoryY();

        IAbstractProductA *createProductA();
        IAbstractProductB *createProductB();
    };

}

#endif

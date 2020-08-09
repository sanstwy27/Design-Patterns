/*
 * ConcreteProductB.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef CONCRETE_PRODUCT_B_HPP_
#define CONCRETE_PRODUCT_B_HPP_

#include <IAbstractProductB.hpp>

namespace AbstractFactorySpace {

    class ConcreteProductB1 : public IAbstractProductB
    {
    public:
        ~ConcreteProductB1();

        string getName();
    };

    class ConcreteProductB2 : public IAbstractProductB
    {
    public:
        ~ConcreteProductB2();

        string getName();
    };

}

#endif

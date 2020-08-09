/*
 * ConcreteProductA.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef CONCRETE_PRODUCT_A_HPP_
#define CONCRETE_PRODUCT_A_HPP_

#include "./AbstractProductA.hpp"

namespace AbstractFactorySpace {

    class ConcreteProductA1 : public AbstractProductA
    {
    public:
        ~ConcreteProductA1();

        string getName();
    };

    class ConcreteProductA2 : public AbstractProductA
    {
    public:
        ~ConcreteProductA2();

        string getName();
    };

    class ConcreteProductA3 : virtual public AbstractProductA
    {
    public:
        ~ConcreteProductA3();

        string getName();
    };

}

#endif

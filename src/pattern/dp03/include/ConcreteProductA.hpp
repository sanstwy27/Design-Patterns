/*
 * ConcreteProductA.hpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP03_CONCRETEPRODUCTA_HPP_
#define PATTERN_DP03_CONCRETEPRODUCTA_HPP_

#include "./Product.hpp"

namespace FactoryMethod {

    class ConcreteProductA: public Product {
    public:
        ~ConcreteProductA();

        string getName();
    };

} /* namespace FactoryMethod */

#endif /* PATTERN_DP03_CONCRETEPRODUCTA_HPP_ */

/*
 * ConcreteProductB.hpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP03_CONCRETEPRODUCTB_HPP_
#define PATTERN_DP03_CONCRETEPRODUCTB_HPP_

#include <IProduct.hpp>

namespace FactoryMethodSpace {

    class ConcreteProductB: public IProduct {
    public:
        ~ConcreteProductB();

        string getName();
    };

} /* namespace FactoryMethod */

#endif /* PATTERN_DP03_CONCRETEPRODUCTA_HPP_ */

/*
 * Creator.hpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP03_CREATOR_HPP_
#define PATTERN_DP03_CREATOR_HPP_

#include "./Product.hpp"

namespace FactoryMethod {

    class Creator {
    public:
        virtual ~Creator();

        virtual Product* createProductA() = 0;
        virtual Product* createProductB() = 0;
    };

} /* namespace FactoryMethod */

#endif /* PATTERN_DP03_CREATOR_HPP_ */

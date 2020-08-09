/*
 * Product.hpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP03_PRODUCT_HPP_
#define PATTERN_DP03_PRODUCT_HPP_

#include <iostream>

using namespace std;

namespace FactoryMethodSpace {

    class IProduct {
    public:
        virtual ~IProduct();

        virtual string getName() = 0;
    };

} /* namespace FactoryMethod */

#endif /* PATTERN_DP03_PRODUCT_HPP_ */

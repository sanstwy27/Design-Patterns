/*
 * Creator.hpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP03_CREATOR_HPP_
#define PATTERN_DP03_CREATOR_HPP_

#include <IProduct.hpp>

namespace FactoryMethodSpace {

    class ICreator {
    public:
        virtual ~ICreator();

        virtual IProduct* createProductA() = 0;
        virtual IProduct* createProductB() = 0;
    };

} /* namespace FactoryMethod */

#endif /* PATTERN_DP03_CREATOR_HPP_ */

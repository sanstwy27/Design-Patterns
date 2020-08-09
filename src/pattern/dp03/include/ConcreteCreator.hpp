/*
 * ConcreteCreator.hpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP03_CONCRETECREATOR_HPP_
#define PATTERN_DP03_CONCRETECREATOR_HPP_

#include "./Creator.hpp"

namespace FactoryMethod {

    class ConcreteCreator: public Creator {
    public:
        ~ConcreteCreator();

        Product* createProductA();
        Product* createProductB();
    };

} /* namespace FactoryMethod */

#endif /* PATTERN_DP03_CONCRETECREATOR_HPP_ */

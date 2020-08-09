/*
 * ConcreteCreator.hpp
 *
 *  Created on: Mar 29, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP03_CONCRETECREATOR_HPP_
#define PATTERN_DP03_CONCRETECREATOR_HPP_

#include <ICreator.hpp>

namespace FactoryMethodSpace {

    class ConcreteCreator: public ICreator {
    public:
        ~ConcreteCreator();

        IProduct* createProductA();
        IProduct* createProductB();
    };

} /* namespace FactoryMethod */

#endif /* PATTERN_DP03_CONCRETECREATOR_HPP_ */

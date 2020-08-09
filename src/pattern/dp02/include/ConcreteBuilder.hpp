/*
 * ConcreteBuilder.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP02_CONCRETEBUILDER_HPP_
#define PATTERN_DP02_CONCRETEBUILDER_HPP_

#include "./Builder.hpp"

namespace BuilderSpace {

    class ConcreteBuilder: public Builder {
    public:
        void buildPartA();
        void buildPartB();
        void buildPartC();
    };

}

#endif /* PATTERN_DP02_CONCRETEBUILDER_HPP_ */

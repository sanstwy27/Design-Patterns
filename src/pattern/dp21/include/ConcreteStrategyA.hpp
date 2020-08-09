/*
 * ConcreteStrategyA.hpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP21_CONCRETESTRATEGYA_HPP_
#define PATTERN_DP21_CONCRETESTRATEGYA_HPP_

#include "./IStrategy.hpp"

namespace StrategySpace {

    class ConcreteStrategyA: public IStrategy {
    public:
        ~ConcreteStrategyA();

        void execute();
    };

} /* namespace StrategySpace */

#endif /* PATTERN_DP21_CONCRETESTRATEGYA_HPP_ */

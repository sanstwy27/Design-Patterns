/*
 * ConcreteStrategyB.hpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP21_CONCRETESTRATEGYB_HPP_
#define PATTERN_DP21_CONCRETESTRATEGYB_HPP_

#include "./IStrategy.hpp"

namespace StrategySpace {

    class ConcreteStrategyB: public IStrategy {
    public:
        ~ConcreteStrategyB();

        void execute();
    };

} /* namespace StrategySpace */

#endif /* PATTERN_DP21_CONCRETESTRATEGYB_HPP_ */

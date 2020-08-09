/*
 * Context.hpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP21_CONTEXT_HPP_
#define PATTERN_DP21_CONTEXT_HPP_

#include "./IStrategy.hpp"

namespace StrategySpace {

    class StrategyContext {
    public:
        StrategyContext(IStrategy* state);
        ~StrategyContext();

        void execute();

    private:
        IStrategy* mStrategy;
    };

} /* namespace StrategySpace */

#endif /* PATTERN_DP21_CONTEXT_HPP_ */

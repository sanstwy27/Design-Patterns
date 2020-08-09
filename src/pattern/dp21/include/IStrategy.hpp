/*
 * IStrategy.hpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP21_ISTRATEGY_HPP_
#define PATTERN_DP21_ISTRATEGY_HPP_

namespace StrategySpace {

    class IStrategy {
    public:
        virtual ~IStrategy();

        virtual void execute() = 0;
    };

} /* namespace StrategySpace */

#endif /* PATTERN_DP21_ISTRATEGY_HPP_ */

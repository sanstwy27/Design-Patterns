/*
 * Invoker.hpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP14_INVOKER_HPP_
#define PATTERN_DP14_INVOKER_HPP_

#include "./ICommand.hpp"

namespace CommandSpace {

    class Invoker {
    public:
        void submit(ICommand* command);
    };

} /* namespace CommandSpace */

#endif /* PATTERN_DP14_INVOKER_HPP_ */

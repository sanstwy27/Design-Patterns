/*
 * IState.hpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP20_ISTATE_HPP_
#define PATTERN_DP20_ISTATE_HPP_

namespace StateSpace {

    class IState {
    public:
        virtual ~IState();

        virtual void handle() = 0;
    };

} /* namespace StateSpace */

#endif /* PATTERN_DP20_ISTATE_HPP_ */

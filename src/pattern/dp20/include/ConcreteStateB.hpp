/*
 * ConcreteStateB.hpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP20_CONCRETESTATEB_HPP_
#define PATTERN_DP20_CONCRETESTATEB_HPP_

#include "./IState.hpp"

namespace StateSpace {

    class ConcreteStateB: public IState {
    public:
        ~ConcreteStateB();

        void handle();
    };

} /* namespace StateSpace */

#endif /* PATTERN_DP20_CONCRETESTATEB_HPP_ */

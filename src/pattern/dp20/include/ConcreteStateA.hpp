/*
 * ConcreteStateA.hpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP20_CONCRETESTATEA_HPP_
#define PATTERN_DP20_CONCRETESTATEA_HPP_

#include "./IState.hpp"

namespace StateSpace {

    class ConcreteStateA: public IState {
    public:
        ~ConcreteStateA();

        void handle();
    };

} /* namespace StateSpace */

#endif /* PATTERN_DP20_CONCRETESTATEA_HPP_ */

/*
 * Context.hpp
 *
 *  Created on: Apr 5, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP20_CONTEXT_HPP_
#define PATTERN_DP20_CONTEXT_HPP_

#include "./IState.hpp"

namespace StateSpace {

    class Context {
    public:
        Context();
        ~Context();

        void setState(IState* state);
        IState* getState();
        void request();

    private:
        IState* mState;
    };

} /* namespace StateSpace */

#endif /* PATTERN_DP20_CONTEXT_HPP_ */

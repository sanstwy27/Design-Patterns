/*
 * Memento.hpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP18_MEMENTO_HPP_
#define PATTERN_DP18_MEMENTO_HPP_

namespace MementoSpace {

    class Memento {
    public:
        Memento(int state);

        void setState(int state);
        int getState();

    private:
        int mState;
    };

}

#endif /* PATTERN_DP18_MEMENTO_HPP_ */

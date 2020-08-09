/*
 * Originator.hpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP18_ORIGINATOR_HPP_
#define PATTERN_DP18_ORIGINATOR_HPP_

#include "./Memento.hpp"

namespace MementoSpace {

    class Originator {
    public:
        void setState(int state);
        int getState();

        void setMemento(Memento* memo);
        Memento* getMemento();

    private:
        int mState;
    };

} /* namespace MementoSpace */

#endif /* PATTERN_DP18_ORIGINATOR_HPP_ */

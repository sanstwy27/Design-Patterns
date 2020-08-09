/*
 * CareTaker.hpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP18_CARETAKER_HPP_
#define PATTERN_DP18_CARETAKER_HPP_

#include <vector>
#include "./Originator.hpp"
#include "./Memento.hpp"

namespace MementoSpace {

    class CareTaker {
    public:
        CareTaker(Originator* const ori);
        virtual ~CareTaker();

        void save();
        void undo();

    private:
        Originator* mOriginator;
        std::vector<Memento*> mHistory;
    };

} /* namespace MementoSpace */

#endif /* PATTERN_DP18_CARETAKER_HPP_ */

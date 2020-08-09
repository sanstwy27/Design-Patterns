/*
 * ConcreteAggregate.hpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP16_CONCRETEAGGREGATE_HPP_
#define PATTERN_DP16_CONCRETEAGGREGATE_HPP_

#include "./IAggregate.hpp"
#include "./IIterator.hpp"

namespace IteratorSpace {

    class ConcreteAggregate: public IAggregate {
    public:
        ConcreteAggregate(unsigned int size);
        ~ConcreteAggregate();

        IIterator* createIterator();
        unsigned int size() const;
        int get(unsigned int index);
        void set();

    private:
        int* mList;
        unsigned int mCount;
    };

} /* namespace IteratorSpace */

#endif /* PATTERN_DP16_CONCRETEAGGREGATE_HPP_ */

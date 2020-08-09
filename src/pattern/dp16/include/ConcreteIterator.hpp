/*
 * ConcreteIterator.hpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP16_CONCRETEITERATOR_HPP_
#define PATTERN_DP16_CONCRETEITERATOR_HPP_

#include "./IIterator.hpp"
#include "./ConcreteAggregate.hpp"

namespace IteratorSpace {

    class ConcreteIterator: public IIterator {
    public:
        ConcreteIterator(ConcreteAggregate* list);
        ~ConcreteIterator();

        void next();
        bool hasNext() const;
        int var() const;

    private:
        ConcreteAggregate* mList;
        unsigned int mIndex;
    };

} /* namespace IteratorSpace */

#endif /* PATTERN_DP16_CONCRETEITERATOR_HPP_ */

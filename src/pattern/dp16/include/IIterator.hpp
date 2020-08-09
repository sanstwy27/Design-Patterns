/*
 * IIterator.hpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP16_IITERATOR_HPP_
#define PATTERN_DP16_IITERATOR_HPP_

namespace IteratorSpace {

    class IIterator {
    public:
        virtual ~IIterator();

        virtual void next() = 0;
        virtual bool hasNext() const = 0;
        virtual int var() const = 0;
    };

} /* namespace IteratorSpace */

#endif /* PATTERN_DP16_IITERATOR_HPP_ */

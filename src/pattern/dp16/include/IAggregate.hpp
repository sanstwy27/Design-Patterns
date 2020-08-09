/*
 * IAggregate.hpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP16_IAGGREGATE_HPP_
#define PATTERN_DP16_IAGGREGATE_HPP_

#include "./IIterator.hpp"

namespace IteratorSpace {

class IAggregate {
    public:
        virtual ~IAggregate();

        virtual IIterator *createIterator() = 0;
    };

} /* namespace IteratorSpace */

#endif /* PATTERN_DP16_IAGGREGATE_HPP_ */

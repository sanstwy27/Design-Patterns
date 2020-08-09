/*
 * Lion.hpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP23_LION_HPP_
#define PATTERN_DP23_LION_HPP_

#include "./IElement.hpp"

namespace VisitorSpace {

    class Lion: public IElement {
    public:
        virtual ~Lion();

        void accept(IVisitor &visitor);
    };

} /* namespace VisitorSpace */

#endif /* PATTERN_DP23_LION_HPP_ */

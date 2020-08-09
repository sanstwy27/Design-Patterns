/*
 * IElement.hpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP23_IELEMENT_HPP_
#define PATTERN_DP23_IELEMENT_HPP_

#include "./IVisitor.hpp"

namespace VisitorSpace {

    class IElement {
    public:
        virtual ~IElement();

        virtual void accept(IVisitor &visitor) = 0;
    };

} /* namespace VisitorSpace */

#endif /* PATTERN_DP23_IELEMENT_HPP_ */

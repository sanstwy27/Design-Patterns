/*
 * ConcreteElementA.hpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP23_CONCRETEELEMENTA_HPP_
#define PATTERN_DP23_CONCRETEELEMENTA_HPP_

#include <IElement.hpp>

namespace VisitorSpace {

    class Monkey: public IElement {
    public:
        virtual ~Monkey();

        void accept(IVisitor &visitor);
    };

} /* namespace VisitorSpace */

#endif /* PATTERN_DP23_CONCRETEELEMENTA_HPP_ */

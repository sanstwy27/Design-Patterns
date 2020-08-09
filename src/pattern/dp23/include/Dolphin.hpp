/*
 * Dolphin.hpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP23_DOLPHIN_HPP_
#define PATTERN_DP23_DOLPHIN_HPP_

#include <IElement.hpp>

namespace VisitorSpace {

    class Dolphin: public IElement {
    public:
        virtual ~Dolphin();

        void accept(IVisitor &visitor);
    };

} /* namespace VisitorSpace */

#endif /* PATTERN_DP23_DOLPHIN_HPP_ */

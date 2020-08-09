/*
 * ConcreteFlyweight.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP11_CONCRETEFLYWEIGHT_HPP_
#define PATTERN_DP11_CONCRETEFLYWEIGHT_HPP_

#include "./IFlyweight.hpp"

namespace FlyweightSpace {

    class ConcreteFlyweight: public IFlyweight {
    public:
        ConcreteFlyweight(int intrinsicState);
        virtual ~ConcreteFlyweight();

        void operation(int extrinsicState);

    private:
        int mIntrinsicState;
    };

} /* namespace FlyweightSpace */

#endif /* PATTERN_DP11_CONCRETEFLYWEIGHT_HPP_ */

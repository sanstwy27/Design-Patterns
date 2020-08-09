/*
 * UnsharedConcreteFlyweight.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP11_UNSHAREDCONCRETEFLYWEIGHT_HPP_
#define PATTERN_DP11_UNSHAREDCONCRETEFLYWEIGHT_HPP_

#include "./IFlyweight.hpp"

namespace FlyweightSpace {

class UnsharedConcreteFlyweight: public IFlyweight {
    public:
        UnsharedConcreteFlyweight(int intrinsicState);
        virtual ~UnsharedConcreteFlyweight();

        void operation(int extrinsicState);

    private:
        int mIntrinsicState;
    };

} /* namespace FlyweightSpace */

#endif /* PATTERN_DP11_UNSHAREDCONCRETEFLYWEIGHT_HPP_ */

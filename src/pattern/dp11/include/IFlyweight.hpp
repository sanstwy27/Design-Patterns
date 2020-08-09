/*
 * Flyweight.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP11_IFLYWEIGHT_HPP_
#define PATTERN_DP11_IFLYWEIGHT_HPP_

// intrinsicState: state-independent
// extrinsicState: state-dependent
namespace FlyweightSpace {

    class IFlyweight {
    public:
        virtual ~IFlyweight();

        virtual void operation(int extrinsicState) = 0;
    };

} /* namespace FlyweightSpace */

#endif /* PATTERN_DP11_IFLYWEIGHT_HPP_ */

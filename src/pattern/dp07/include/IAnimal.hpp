/*
 * Animal.hpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP07_IANIMAL_HPP_
#define PATTERN_DP07_IANIMAL_HPP_

namespace BridgeSpace {

    class IAnimal {
    public:
        virtual ~IAnimal();

        virtual void move() = 0;
        virtual void turn() = 0;
    };

} /* namespace BridgeSpace */

#endif /* PATTERN_DP07_IANIMAL_HPP_ */

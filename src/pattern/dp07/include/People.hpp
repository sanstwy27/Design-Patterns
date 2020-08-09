/*
 * People.hpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP07_PEOPLE_HPP_
#define PATTERN_DP07_PEOPLE_HPP_

#include "./IAnimal.hpp"
#include "./IDrawing.hpp"

namespace BridgeSpace {

    class People: public IAnimal {
    public:
        People(IDrawing* drawing);

        void move();
        void turn();

    private:
        IDrawing* mDrawing;
    };

} /* namespace BridgeSpace */

#endif /* PATTERN_DP07_PEOPLE_HPP_ */

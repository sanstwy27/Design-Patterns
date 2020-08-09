/*
 * IDrawing.hpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP07_IDRAWING_HPP_
#define PATTERN_DP07_IDRAWING_HPP_

namespace BridgeSpace {

    class IDrawing {
    public:
        virtual ~IDrawing();

        virtual void drawImage() = 0;
        virtual void drawLine() = 0;
        virtual void turnImage() = 0;
        virtual void rotateImage() = 0;
    };

} /* namespace BridgeSpace */

#endif /* PATTERN_DP07_IDRAWING_HPP_ */

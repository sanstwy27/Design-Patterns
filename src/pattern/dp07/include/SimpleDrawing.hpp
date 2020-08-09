/*
 * SimpleDrawing.hpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP07_SIMPLEDRAWING_HPP_
#define PATTERN_DP07_SIMPLEDRAWING_HPP_

#include "./IDrawing.hpp"

namespace BridgeSpace {

    class SimpleDrawing: public IDrawing {
    public:
        void drawImage();
        void drawLine();
        void turnImage();
        void rotateImage();
    };

} /* namespace BridgeSpace */

#endif /* PATTERN_DP07_SIMPLEDRAWING_HPP_ */

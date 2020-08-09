/*
 * LabDoor.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP12_LABDOOR_HPP_
#define PATTERN_DP12_LABDOOR_HPP_

#include "./IDoor.hpp"

namespace ProxySpace {

    class LabDoor: public IDoor {
        void open();
        void close();
    };

} /* namespace ProxySpace */

#endif /* PATTERN_DP12_LABDOOR_HPP_ */

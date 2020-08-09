/*
 * IDoor.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP12_IDOOR_HPP_
#define PATTERN_DP12_IDOOR_HPP_

namespace ProxySpace {

    class IDoor {
    public:
        virtual ~IDoor();

        virtual void open() = 0;
        virtual void close() = 0;
    };

} /* namespace ProxySpace */

#endif /* PATTERN_DP12_IDOOR_HPP_ */

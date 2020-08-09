/*
 * ITarget.hpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP06_ITARGET_HPP_
#define PATTERN_DP06_ITARGET_HPP_

#include <iostream>

using namespace std;

namespace AdapterSpace {

    class ITarget {
    public:
        virtual ~ITarget();

        virtual string operation() = 0;
    };

} /* namespace AdapterSpace */

#endif /* PATTERN_DP06_ITARGET_HPP_ */

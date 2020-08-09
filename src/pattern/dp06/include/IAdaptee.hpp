/*
 * Adaptee.h
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP06_IADAPTEE_HPP_
#define PATTERN_DP06_IADAPTEE_HPP_

#include <iostream>

using namespace std;

namespace AdapterSpace {

    // OldClass Interface
    class IAdaptee {
    public:
        virtual ~IAdaptee();

        virtual string adaptedOperation() = 0;
    };

} /* namespace AdapterSpace */

#endif /* PATTERN_DP06_IADAPTEE_HPP_ */

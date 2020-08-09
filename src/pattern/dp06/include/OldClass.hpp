/*
 * OldClass.hpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP06_OLDCLASS_HPP_
#define PATTERN_DP06_OLDCLASS_HPP_

#include "./IAdaptee.hpp"

namespace AdapterSpace {

    class OldClass: public IAdaptee {
    public:
        string adaptedOperation();
    };

} /* namespace AdapterSpace */

#endif /* PATTERN_DP06_OLDCLASS_HPP_ */

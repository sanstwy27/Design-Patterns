/*
 * ClassAdapter.hpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP06_CLASSADAPTER_HPP_
#define PATTERN_DP06_CLASSADAPTER_HPP_

#include "./ITarget.hpp"
#include "./OldClass.hpp"

namespace AdapterSpace {

    // Class Type Adapter
    class ClassAdapter: public ITarget, public OldClass {
    public:
        string operation();
    };

} /* namespace AdapterSpace */

#endif /* PATTERN_DP06_CLASSADAPTER_HPP_ */

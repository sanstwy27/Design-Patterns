/*
 * ObjectAdapter.hpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP06_OBJECTADAPTER_HPP_
#define PATTERN_DP06_OBJECTADAPTER_HPP_

#include "./ITarget.hpp"
#include "./IAdaptee.hpp"

namespace AdapterSpace {

    // Object Type Adapter
    class ObjectAdapter: public ITarget {
    public:
        ObjectAdapter(IAdaptee* pAdaptee);
        virtual string operation();

    protected:
        IAdaptee* mAdapteePtr;
    };

} /* namespace AdapterSpace */

#endif /* PATTERN_DP06_OBJECTADAPTER_HPP_ */

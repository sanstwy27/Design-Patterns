/*
 * ObjectAdapter.cpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#include "../include/ObjectAdapter.hpp"

using namespace AdapterSpace;

ObjectAdapter::ObjectAdapter(IAdaptee* pAdaptee)
{
    mAdapteePtr = pAdaptee;
}

string ObjectAdapter::operation()
{
    return mAdapteePtr->adaptedOperation();
}

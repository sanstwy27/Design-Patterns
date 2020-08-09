/*
 * ConcreteIterator.cpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#include "../include/ConcreteIterator.hpp"

using namespace IteratorSpace;

ConcreteIterator::ConcreteIterator(ConcreteAggregate* list) {
    // TODO Auto-generated constructor stub
    mList = list;
    mIndex = 0;
}

ConcreteIterator::~ConcreteIterator() {
    // TODO Auto-generated destructor stub
}

void ConcreteIterator::next()
{
    mIndex++;
}

bool ConcreteIterator::hasNext() const
{
    return mIndex < mList->size();
}

int ConcreteIterator::var() const
{
    if(!hasNext())
    {
        return -1;
    }
    return mList->get(mIndex);
}

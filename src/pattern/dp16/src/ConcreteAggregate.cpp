/*
 * ConcreteAggregate.cpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#include "../include/ConcreteAggregate.hpp"
#include "../include/ConcreteIterator.hpp"

using namespace IteratorSpace;

ConcreteAggregate::ConcreteAggregate(unsigned int size) {
    // TODO Auto-generated constructor stub
    mList = new int[size]();
    mCount = size;
}

ConcreteAggregate::~ConcreteAggregate() {
    // TODO Auto-generated destructor stub
    delete[] mList;
}

unsigned int ConcreteAggregate::size() const
{
    return mCount;
}

int ConcreteAggregate::get(unsigned int index)
{
    return mList[index];
}

void ConcreteAggregate::set()
{
    // Todo
}

IIterator* ConcreteAggregate::createIterator()
{
    return new ConcreteIterator(this);
}


/*
 * Leaf.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "../include/Leaf.hpp"

using namespace CompositeSpace;

Leaf::Leaf(const string & name) {
    mName = name;
}

void Leaf::operation()
{
    // process current node
    cout << mName + " operation()" << endl;
}

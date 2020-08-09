/*
 * Composite.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "../include/Composite.hpp"

using namespace CompositeSpace;

Composite::Composite(const string & name) {
    mName = name;
}

void Composite::add(IComponent* child)
{
    mChildren.push_back(child);
}

void Composite::remove(IComponent* child)
{
    mChildren.remove(child);
}

void Composite::operation()
{
    // 1. process current node
    cout << mName + " operation()" << endl;

    // 2. process children nodes
    for(auto &c : mChildren)
    {
        c->operation();
    }
}












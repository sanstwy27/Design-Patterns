/*
 * FlyweightFactory.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#include "../include/FlyweightFactory.hpp"
#include "../include/ConcreteFlyweight.hpp"

using namespace FlyweightSpace;

FlyweightFactory::~FlyweightFactory() {
    // TODO Auto-generated destructor stub
    for (auto it = mSharedComponent.begin(); it != mSharedComponent.end(); it++)
    {
        delete it->second;
    }
    mSharedComponent.clear();
}

IFlyweight* FlyweightFactory::getFlyweight(const int key)
{
    if (mSharedComponent.find(key) != mSharedComponent.end())
    {
      return mSharedComponent[key];
    }
    IFlyweight *fly = new ConcreteFlyweight(key);
    mSharedComponent.insert(std::pair<int, IFlyweight *>(key, fly));
    return fly;
}

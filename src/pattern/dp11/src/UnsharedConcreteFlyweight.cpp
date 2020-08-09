/*
 * UnsharedConcreteFlyweight.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/UnsharedConcreteFlyweight.hpp"

using namespace std;
using namespace FlyweightSpace;

UnsharedConcreteFlyweight::~UnsharedConcreteFlyweight() {
    // TODO Auto-generated destructor stub
}

UnsharedConcreteFlyweight::UnsharedConcreteFlyweight(int intrinsicState) {
    // TODO Auto-generated constructor stub
    mIntrinsicState = intrinsicState;

}

void UnsharedConcreteFlyweight::operation(int extrinsicState)
{
    cout << "UnsharedConcreteFlyweight ";
    cout << "intrinsicState:" << mIntrinsicState << " ";
    cout << "extrinsicState:" <<  extrinsicState << " ";
    cout << endl;
}

/*
 * ConcreteFlyweight.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/ConcreteFlyweight.hpp"

using namespace std;
using namespace FlyweightSpace;

ConcreteFlyweight::ConcreteFlyweight(int intrinsicState) {
    // TODO Auto-generated constructor stub
    mIntrinsicState = intrinsicState;
}

ConcreteFlyweight::~ConcreteFlyweight() {
    // TODO Auto-generated destructor stub
}

void ConcreteFlyweight::operation(int extrinsicState)
{
    cout << "ConcreteFlyweight ";
    cout << "intrinsicState:" <<  mIntrinsicState << " ";
    cout << "extrinsicState:" <<  extrinsicState << " ";
    cout << endl;
}

/*
 * ConcreteVisitor2.cpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#include <Jump.hpp>
#include <iostream>

using namespace std;
using namespace VisitorSpace;

Jump::~Jump() {
    // TODO Auto-generated destructor stub
}

void Jump::visitMonkey(Monkey* const element)
{
    cout << "Jumped 20 feet high! on to the tree!" << endl;
}

void Jump::visitLion(Lion* const element)
{
    cout << "Jumped 7 feet! Back on the ground!" << endl;
}

void Jump::visitDolphin(Dolphin* const element)
{
    cout << "Walked on water a little and disappeared" << endl;
}

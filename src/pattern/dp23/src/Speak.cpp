/*
 * ConcreteVisitor1.cpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#include <Speak.hpp>
#include <iostream>

using namespace std;
using namespace VisitorSpace;

Speak::~Speak() {
    // TODO Auto-generated destructor stub
}

void Speak::visitMonkey(Monkey* const element)
{
    cout << "Ooh oo aa aa!" << endl;
}

void Speak::visitLion(Lion* const element)
{
    cout << "Roaaar!" << endl;
}

void Speak::visitDolphin(Dolphin* const element)
{
    cout << "Tuut tuttu tuutt!" << endl;
}

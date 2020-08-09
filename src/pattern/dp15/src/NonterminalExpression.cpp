/*
 * NonterminalExpression.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#include "../include/NonterminalExpression.hpp"

using namespace InterpreterSpace;

NonterminalExpression::NonterminalExpression(IExpression* left, IExpression* right)
    : mLeft(left), mRight(right) {
    // TODO Auto-generated constructor stub

}

NonterminalExpression::~NonterminalExpression() {
    // TODO Auto-generated destructor stub
    delete mLeft;
    delete mRight;
}

bool NonterminalExpression::interpreter(map<char, bool> &context)
{
    return mLeft->interpreter(context) && mRight->interpreter(context);
}

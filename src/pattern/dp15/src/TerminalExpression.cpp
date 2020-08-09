/*
 * TerminalExpression.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#include "../include/TerminalExpression.hpp"

using namespace InterpreterSpace;

TerminalExpression::~TerminalExpression() {
    // TODO Auto-generated destructor stub
}

TerminalExpression::TerminalExpression(char val) : mVar(val) {
    // TODO Auto-generated constructor stub

}

bool TerminalExpression::interpreter(map<char, bool> &context)
{
    return context[mVar];
}

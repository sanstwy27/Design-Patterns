/*
 * InterpreterClient.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include <map>
#include "InterpreterClient.hpp"
#include "IExpression.hpp"
#include "NonterminalExpression.hpp"
#include "TerminalExpression.hpp"

using namespace std;
using namespace InterpreterSpace;

void InterpreterClient::InterpreterTest()
{
    IExpression* A = new TerminalExpression('A');
    IExpression* B = new TerminalExpression('B');
    IExpression* exp = new NonterminalExpression(A, B);

    map<char, bool> context;
    context['A'] = true;
    context['B'] = true;
    cout << (exp->interpreter(context) ? "true" : "false") << endl;
}

/*
 * TerminalExpression.hpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP15_TERMINALEXPRESSION_HPP_
#define PATTERN_DP15_TERMINALEXPRESSION_HPP_

#include "./IExpression.hpp"

namespace InterpreterSpace {

    class TerminalExpression : public IExpression {
    public:
        TerminalExpression(char val);
        ~TerminalExpression();

        bool interpreter(map<char, bool> &context);

    private:
        char mVar;
    };

} /* namespace InterpreterSpace */

#endif /* PATTERN_DP15_TERMINALEXPRESSION_HPP_ */

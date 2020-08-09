/*
 * NonterminalExpression.hpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP15_NONTERMINALEXPRESSION_HPP_
#define PATTERN_DP15_NONTERMINALEXPRESSION_HPP_

#include <map>
#include "./IExpression.hpp"

using namespace std;

namespace InterpreterSpace {

    class NonterminalExpression : public IExpression {
    public:
        NonterminalExpression(IExpression* left, IExpression* right);
        ~NonterminalExpression();

        bool interpreter(map<char, bool> &context);

    private:
        IExpression* mLeft;
        IExpression* mRight;
    };

} /* namespace InterpreterSpace */

#endif /* PATTERN_DP15_NONTERMINALEXPRESSION_HPP_ */

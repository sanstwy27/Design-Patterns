/*
 * IExpression.hpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP15_IEXPRESSION_HPP_
#define PATTERN_DP15_IEXPRESSION_HPP_

#include <map>

using namespace std;

namespace InterpreterSpace {

    class IExpression {
    public:
        virtual ~IExpression();

        virtual bool interpreter(map<char, bool> &context) = 0;
    };

} /* namespace InterpreterSpace */

#endif /* PATTERN_DP15_IEXPRESSION_HPP_ */

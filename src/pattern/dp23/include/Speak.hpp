/*
 * ConcreteVisitor1.hpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP23_CONCRETEVISITOR1_HPP_
#define PATTERN_DP23_CONCRETEVISITOR1_HPP_

#include "./IVisitor.hpp"

namespace VisitorSpace {

    class Speak: public IVisitor {
    public:
        ~Speak();

        void visitMonkey(Monkey* const element);
        void visitLion(Lion* const element);
        void visitDolphin(Dolphin* const element);
    };

} /* namespace VisitorSpace */

#endif /* PATTERN_DP23_CONCRETEVISITOR1_HPP_ */

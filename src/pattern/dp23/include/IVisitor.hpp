/*
 * IVisitor.hpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP23_IVISITOR_HPP_
#define PATTERN_DP23_IVISITOR_HPP_

namespace VisitorSpace {

    class Monkey;
    class Lion;
    class Dolphin;

    class IVisitor {
    public:
        virtual ~IVisitor();

        virtual void visitMonkey(Monkey* const element) = 0;
        virtual void visitLion(Lion* const element) = 0;
        virtual void visitDolphin(Dolphin* const element) = 0;
    };

} /* namespace VisitorSpace */

#endif /* PATTERN_DP23_IVISITOR_HPP_ */

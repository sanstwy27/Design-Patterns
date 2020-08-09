/*
 * IAbstractClass.hpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP22_IABSTRACTCLASS_HPP_
#define PATTERN_DP22_IABSTRACTCLASS_HPP_

namespace TemplateMethodSpace {

    class IAbstractClass {
    public:
        virtual ~IAbstractClass();

        void templateMethod();
        virtual void subMethod1() = 0;
        virtual void subMethod2() = 0;
    };

} /* namespace StrategySpace */

#endif /* PATTERN_DP22_IABSTRACTCLASS_HPP_ */

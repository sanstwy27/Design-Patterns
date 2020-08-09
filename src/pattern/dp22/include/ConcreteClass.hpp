/*
 * ConcreteClass.hpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP22_CONCRETECLASS_HPP_
#define PATTERN_DP22_CONCRETECLASS_HPP_

#include "./IAbstractClass.hpp"

namespace TemplateMethodSpace {

    class ConcreteClass: public IAbstractClass {
    public:
        ~ConcreteClass();

        void subMethod1();
        void subMethod2();
    };

} /* namespace TemplateMethodSpace */

#endif /* PATTERN_DP22_CONCRETECLASS_HPP_ */

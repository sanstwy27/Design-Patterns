/*
 * Facade.hpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP10_FACADE_HPP_
#define PATTERN_DP10_FACADE_HPP_

#include "./SubsystemA.hpp"
#include "./SubsystemB.hpp"
#include "./SubsystemC.hpp"

namespace FacadeSpace {

    class Facade {
    public:
        Facade();

        void operation1();
        void operation2();

    private:
        SubsystemA* mSubsystemAPtr;
        SubsystemB* mSubsystemBPtr;
        SubsystemC* mSubsystemCPtr;
    };

} /* namespace FacadeSpace */

#endif /* PATTERN_DP10_FACADE_HPP_ */

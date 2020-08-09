/*
 * ConcreteComponent.h
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP09_CONCRETECOMPONENT_HPP_
#define PATTERN_DP09_CONCRETECOMPONENT_HPP_

#include "IComponent.hpp"

namespace DecoratorSpace {

class ConcreteComponent: public IComponent {
    public:
        ~ConcreteComponent();

        void operation();
    };

} /* namespace DecoratorSpace */

#endif /* PATTERN_DP09_CONCRETECOMPONENT_HPP_ */

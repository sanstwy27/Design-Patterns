/*
 * IComponent.hpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP09_ICOMPONENT_HPP_
#define PATTERN_DP09_ICOMPONENT_HPP_

namespace DecoratorSpace {

class IComponent {
    public:
        virtual ~IComponent();

        virtual void operation() = 0;
    };

} /* namespace DecoratorSpace */

#endif /* PATTERN_DP09_ICOMPONENT_HPP_ */

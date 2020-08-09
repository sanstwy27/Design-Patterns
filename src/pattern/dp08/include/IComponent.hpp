/*
 * IComponent.h
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP08_ICOMPONENT_HPP_
#define PATTERN_DP08_ICOMPONENT_HPP_

namespace CompositeSpace {

class IComponent {
    public:
        virtual ~IComponent();

        virtual void operation() = 0;
    };

} /* namespace CompositeSpace */

#endif /* PATTERN_DP08_ICOMPONENT_HPP_ */

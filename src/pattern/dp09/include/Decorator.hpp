/*
 * Decorator.hpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP09_DECORATOR_HPP_
#define PATTERN_DP09_DECORATOR_HPP_

#include "IComponent.hpp"

namespace DecoratorSpace {

class Decorator: public IComponent {
public:
    ~Decorator();
    Decorator(IComponent* c);

    virtual void operation();

private:
    IComponent* mComponent;
};

} /* namespace DecoratorSpace */

#endif /* PATTERN_DP09_DECORATOR_HPP_ */

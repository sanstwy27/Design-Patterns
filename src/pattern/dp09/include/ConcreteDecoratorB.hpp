/*
 * ConcreteDecoratorB.hpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP09_CONCRETEDECORATORB_HPP_
#define PATTERN_DP09_CONCRETEDECORATORB_HPP_

#include <iostream>
#include "Decorator.hpp"

using namespace std;

namespace DecoratorSpace {

    class ConcreteDecoratorB : public Decorator {
    public:
        ConcreteDecoratorB(IComponent* c);

        void operation();
        void addedBehavior();

    private:
        string mAddedState;
    };

} /* namespace DecoratorSpace */

#endif /* PATTERN_DP09_CONCRETEDECORATORA_HPP_ */

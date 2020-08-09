/*
 * Composite.hpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP08_COMPOSITE_HPP_
#define PATTERN_DP08_COMPOSITE_HPP_

#include <iostream>
#include <list>
#include "./IComponent.hpp"

using namespace std;

namespace CompositeSpace {

    class Composite: public IComponent {
    public:
        Composite(const string & name);

        void add(IComponent* child);
        void remove(IComponent* child);
        void operation();

    private:
        string mName;
        list<IComponent*> mChildren;
    };

} /* namespace CompositeSpace */

#endif /* PATTERN_DP08_COMPOSITE_HPP_ */

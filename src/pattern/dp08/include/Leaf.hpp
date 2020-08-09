/*
 * Leaf.hpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP08_LEAF_HPP_
#define PATTERN_DP08_LEAF_HPP_

#include <iostream>
#include "./IComponent.hpp"

using namespace std;

namespace CompositeSpace {

    class Leaf: public IComponent {
    public:
        Leaf(const string & name);

        void operation();

    private:
        string mName;
    };

} /* namespace CompositeSpace */

#endif /* PATTERN_DP08_LEAF_HPP_ */

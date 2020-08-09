/*
 * Builder.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP02_BUILDER_HPP_
#define PATTERN_DP02_BUILDER_HPP_

#include "./Product.hpp"

namespace BuilderSpace {

    class Builder {
    public:
        virtual ~Builder();

        void init();
        Product get();
        virtual void buildPartA() = 0;
        virtual void buildPartB() = 0;
        virtual void buildPartC() = 0;

    protected:
        Product product;
    };

}

#endif /* PATTERN_DP02_BUILDER_HPP_ */

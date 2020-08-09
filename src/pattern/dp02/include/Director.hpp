/*
 * Director.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP02_DIRECTOR_HPP_
#define PATTERN_DP02_DIRECTOR_HPP_

#include "./Builder.hpp"

namespace BuilderSpace {

    class Director {
    public:
        Director();
        ~Director();

        void simpleConstructor();
        void fullConstructor();
        void set(Builder *builder);
        Product get();

    private:
        Builder *builder;
    };

}

#endif /* PATTERN_DP02_DIRECTOR_HPP_ */

/*
 * ProductA.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef PRODUCT_A_HPP_
#define PRODUCT_A_HPP_

#include <string>

using namespace std;

namespace AbstractFactorySpace {

    class AbstractProductA
    {
    public:
        virtual ~AbstractProductA();

        virtual string getName() = 0;
    };

}

#endif

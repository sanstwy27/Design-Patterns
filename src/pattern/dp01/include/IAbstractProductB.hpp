/*
 * ProductB.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef PRODUCT_B_HPP_
#define PRODUCT_B_HPP_

#include <string>

using namespace std;

namespace AbstractFactorySpace {

    class IAbstractProductB
    {
    public:
        virtual ~IAbstractProductB();

        virtual string getName() = 0;
    };

}

#endif

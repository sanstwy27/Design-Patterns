/*
 * Builder.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#include "Builder.hpp"

using namespace BuilderSpace;

Builder::~Builder() {
    // TODO Auto-generated destructor stub
}

void Builder::init()
{
    product.init();
}

Product Builder::get()
{
    return product;
}


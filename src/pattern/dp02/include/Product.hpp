/*
 * Product.hpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP02_PRODUCT_HPP_
#define PATTERN_DP02_PRODUCT_HPP_

#include <iostream>
#include <string>

using namespace std;

namespace BuilderSpace {

    class Product {
    public:
        void init();
        string get();

        void makePartA(const string &part);
        void makePartB(const string &part);
        void makePartC(const string &part);

    private:
        string partA;
        string partB;
        string partC;
    };

}

#endif /* PATTERN_DP02_PRODUCT_HPP_ */

/*
 * Product.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#include "../include/Product.hpp"

using namespace BuilderSpace;

void Product::init()
{
    partA = "";
    partB = "";
    partC = "";
}

string Product::get()
{
    return (partA + "-" + partB + "-" + partC);
}

void Product::makePartA(const string &part)
{
    partA = part;
}

void Product::makePartB(const string &part)
{
    partB = part;
}

void Product::makePartC(const string &part)
{
    partC = part;
}


/*
 * Director.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: sanstwy27
 */

#include "Director.hpp"

using namespace BuilderSpace;

Director::Director() : builder()
{

}

Director::~Director()
{

}

void Director::simpleConstructor()
{
    builder->init();
    builder->buildPartA();
}

void Director::fullConstructor()
{
    builder->init();
    builder->buildPartA();
    builder->buildPartB();
    builder->buildPartC();
}

void Director::set(Builder *newBuilder)
{
    if(builder)
    {
        delete builder;
    }
    builder = newBuilder;
}

Product Director::get()
{
    return builder->get();
}


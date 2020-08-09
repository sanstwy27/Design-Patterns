/*
 * Singleton.h
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP05_SINGLETON_HPP_
#define PATTERN_DP05_SINGLETON_HPP_

#include <iostream>

using namespace std;

namespace SingletonSpace {

    class Singleton {
    public:
        Singleton& operator=(Singleton &&other) = delete;
        Singleton& operator=(const Singleton &other) = delete;

        static Singleton* get();
        string operation();

    private:
        Singleton();
        static Singleton* uniqueInstance;
    };

} /* namespace SingletonNamespace */

#endif /* PATTERN_DP05_SINGLETON_HPP_ */

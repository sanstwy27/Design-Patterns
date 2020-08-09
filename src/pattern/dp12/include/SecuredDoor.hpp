/*
 * SecuredDoor.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP12_SECUREDDOOR_HPP_
#define PATTERN_DP12_SECUREDDOOR_HPP_

#include <iostream>
#include "./IDoor.hpp"

using namespace std;

namespace ProxySpace {

class SecuredDoor {
    public:
        SecuredDoor(IDoor* door);

        void open(const string &password);
        void close();

    private:
        bool authenticate(const string &password);

    private:
        IDoor* mDoor;
    };

} /* namespace ProxySpace */

#endif /* PATTERN_DP12_SECUREDDOOR_HPP_ */

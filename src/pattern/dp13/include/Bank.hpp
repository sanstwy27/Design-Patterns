/*
 * Bank.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP13_BANK_HPP_
#define PATTERN_DP13_BANK_HPP_

#include "./Account.hpp"

namespace ChainOfResponsibilitySpace {

    class Bank: public Account {
    public:
        Bank(float balance);

    };

} /* namespace ChainOfResponsibilitySpace */

#endif /* PATTERN_DP13_BANK_HPP_ */

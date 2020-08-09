/*
 * Account.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP13_ACCOUNT_HPP_
#define PATTERN_DP13_ACCOUNT_HPP_

#include <iostream>

using namespace std;

namespace ChainOfResponsibilitySpace {

    class Account {
    public:
        void pay(float cost);
        void setNext(Account* account);

    private:
        bool canPay(float amount);

    protected:
        float mBalance;
        string mName;
        Account* mSuccessor;
    };

} /* namespace ChainOfResponsibilitySpace */

#endif /* PATTERN_DP13_ACCOUNT_HPP_ */

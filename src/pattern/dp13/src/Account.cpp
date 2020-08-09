/*
 * Account.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/Account.hpp"

using namespace std;
using namespace ChainOfResponsibilitySpace;

void Account::pay(float cost)
{
    if(canPay(cost))
    {
        cout << "Paid $" << cost << " using " + mName + "." << endl;
    }
    else if(mSuccessor)
    {
        cout << "Cannot pay using " + mName + ". Processing .." << endl;
        mSuccessor->pay(cost);
    }
    else
    {
        cout << "None of the accounts have enough balance" << endl;
    }
}

void Account::setNext(Account* account)
{
    mSuccessor = account;
}

bool Account::canPay(float amount)
{
    return mBalance > amount;
}


/*
 * ChainOfResponsibilityClient.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#include "ChainOfResponsibilityClient.hpp"
#include "Bank.hpp"
#include "Paypal.hpp"

using namespace ChainOfResponsibilitySpace;

void ChainOfResponsibilityClient::ChainOfResponsibilityTest()
{
    Bank bank(300);
    Paypal paypal(100);
    paypal.setNext(&bank);
    paypal.pay(150);
}

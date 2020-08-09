/*
 * Paypal.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP13_PAYPAL_HPP_
#define PATTERN_DP13_PAYPAL_HPP_

#include <./Account.hpp>

namespace ChainOfResponsibilitySpace {

    class Paypal: public Account {
    public:
        Paypal(float balance);
    };

} /* namespace ChainOfResponsibilitySpace */

#endif /* PATTERN_DP13_PAYPAL_HPP_ */

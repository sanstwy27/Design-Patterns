/*
 * Observer.hpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP19_IOBSERVER_HPP_
#define PATTERN_DP19_IOBSERVER_HPP_

#include "./ISubject.hpp"

namespace ObserverSpace {

    class ISubject;

    class IObserver {
    public:
        virtual ~IObserver();

        virtual int getState() = 0;
        virtual void update(ISubject* subject) = 0;
    };

} /* namespace ObserverSpace */

#endif /* PATTERN_DP19_IOBSERVER_HPP_ */

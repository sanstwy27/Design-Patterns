/*
 * ISubject.hpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP19_ISUBJECT_HPP_
#define PATTERN_DP19_ISUBJECT_HPP_

#include "./IObserver.hpp"

namespace ObserverSpace {

    class IObserver;

    class ISubject {
    public:
        virtual ~ISubject();

        virtual void attach(IObserver *observer) = 0;
        virtual void detach(int index) = 0;
        virtual void notify() = 0;

        virtual int getState() = 0;
        virtual void setState(int state) = 0;
    };

} /* namespace ObserverSpace */

#endif /* PATTERN_DP19_ISUBJECT_HPP_ */

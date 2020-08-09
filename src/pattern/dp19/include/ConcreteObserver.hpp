/*
 * ConcreteObserver.hpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP19_CONCRETEOBSERVER_HPP_
#define PATTERN_DP19_CONCRETEOBSERVER_HPP_

#include "./IObserver.hpp"
#include "./ISubject.hpp"

namespace ObserverSpace {

    class ConcreteObserver: public IObserver {
    public:
        ConcreteObserver(int state);
        ~ConcreteObserver();

        int getState();
        void update(ISubject *subject);

    private:
        int mObserver;
    };

} /* namespace ObserverSpace */

#endif /* PATTERN_DP19_CONCRETEOBSERVER_HPP_ */

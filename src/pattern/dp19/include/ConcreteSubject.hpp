/*
 * ConcreteSubject.hpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP19_CONCRETESUBJECT_HPP_
#define PATTERN_DP19_CONCRETESUBJECT_HPP_

#include <vector>
#include "./ISubject.hpp"
#include "./IObserver.hpp"

namespace ObserverSpace {

    class ConcreteSubject : public ISubject {
    public:
        ~ConcreteSubject();

        void attach(IObserver* observer);
        void detach(int index);
        void notify();

        int getState();
        void setState(int state);

    private:
        std::vector<IObserver*> mObservers;
        int mSubjectState;
    };

} /* namespace ObserverSpace */

#endif /* PATTERN_DP19_CONCRETESUBJECT_HPP_ */

/*
 * ConcreteMediator.hpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP17_CONCRETEMEDIATOR_HPP_
#define PATTERN_DP17_CONCRETEMEDIATOR_HPP_

#include <vector>
#include "./IMediator.hpp"
#include "./IColleague.hpp"

using namespace std;

namespace MediatorSpace {

    class ConcreteMediator: public IMediator {
    public:
        ~ConcreteMediator();

        void add(IColleague* const colleague);
        void distribute(IColleague* const sender, std::string msg);

    private:
        vector<IColleague*> mColleagues;
    };

} /* namespace MediatorSpace */

#endif /* PATTERN_DP17_CONCRETEMEDIATOR_HPP_ */

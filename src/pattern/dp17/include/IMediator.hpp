/*
 * IMediator.hpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP17_IMEDIATOR_HPP_
#define PATTERN_DP17_IMEDIATOR_HPP_

#include "./IColleague.hpp"

namespace MediatorSpace {

    class IColleague;

    class IMediator {
    public:
        virtual ~IMediator();

        virtual void add(IColleague* const colleague) = 0;
        virtual void distribute(IColleague* const sender, std::string msg) = 0;
    };

} /* namespace MediatorSpace */

#endif /* PATTERN_DP17_IMEDIATOR_HPP_ */

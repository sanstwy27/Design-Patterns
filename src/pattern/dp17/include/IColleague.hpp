/*
 * IColleague.hpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP17_ICOLLEAGUE_HPP_
#define PATTERN_DP17_ICOLLEAGUE_HPP_

#include <iostream>
#include "./IMediator.hpp"

using namespace std;

namespace MediatorSpace {

    class IColleague {
    public:
        virtual ~IColleague();

        virtual unsigned int id() = 0;
        virtual void send(string) = 0;
        virtual void receive(string) = 0;
    };

} /* namespace MediatorSpace */

#endif /* PATTERN_DP17_ICOLLEAGUE_HPP_ */

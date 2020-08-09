/*
 * ConcreteColleague.hpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP17_CONCRETECOLLEAGUE_HPP_
#define PATTERN_DP17_CONCRETECOLLEAGUE_HPP_

#include "./IColleague.hpp"
#include "./IMediator.hpp"

namespace MediatorSpace {

    class ConcreteColleague: public IColleague {
    public:
        ~ConcreteColleague();
        ConcreteColleague(IMediator* const m, const unsigned int i);

        unsigned int id();
        void send(string);
        void receive(string);

    protected:
        IMediator *mMediator;
        unsigned int mId;
    };

} /* namespace MediatorSpace */

#endif /* PATTERN_DP17_CONCRETECOLLEAGUE_HPP_ */

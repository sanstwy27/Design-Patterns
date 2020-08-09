/*
 * ConcreteColleague.cpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/ConcreteColleague.hpp"
#include "../include/ConcreteMediator.hpp"

using namespace std;
using namespace MediatorSpace;

ConcreteColleague::~ConcreteColleague() {
    // TODO Auto-generated destructor stub
}

ConcreteColleague::ConcreteColleague(IMediator* const m, const unsigned int i) {
    // TODO Auto-generated constructor stub
    mMediator = m;
    mId = i;
}

unsigned int ConcreteColleague::id()
{
    return mId;
}

void ConcreteColleague::send(string msg)
{
    cout << "Message '"<< msg << "' sent by Colleague " << mId << endl;
    mMediator->distribute(this, msg);
}

void ConcreteColleague::receive(string msg)
{
    cout << "Message '" << msg << "' received by Colleague " << mId << endl;
}



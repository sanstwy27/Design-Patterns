/*
 * ConcreteMediator.cpp
 *
 *  Created on: Apr 3, 2020
 *      Author: sanstwy27
 */

#include "../include/ConcreteMediator.hpp"

using namespace MediatorSpace;

ConcreteMediator::~ConcreteMediator()
{
    for(unsigned int i = 0; i < mColleagues.size(); i++)
    {
        delete mColleagues[i];
    }
    mColleagues.clear();
}

void ConcreteMediator::add(IColleague* const colleague)
{
    mColleagues.push_back(colleague);
}

void ConcreteMediator::distribute(IColleague* const sender, std::string msg)
{
    for(unsigned int i = 0; i < mColleagues.size(); i++)
    {
        if(mColleagues.at(i)->id() != sender->id())
        {
            mColleagues.at(i)->receive( msg );
        }
    }
}

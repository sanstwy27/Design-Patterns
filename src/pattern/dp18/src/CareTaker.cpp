/*
 * CareTaker.cpp
 *
 *  Created on: Apr 4, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include <vector>
#include "../include/CareTaker.hpp"

using namespace MementoSpace;

CareTaker::CareTaker(Originator* const ori) {
    // TODO Auto-generated constructor stub
    mOriginator = ori;
}

CareTaker::~CareTaker() {
    // TODO Auto-generated destructor stub
    for(unsigned int i = 0; i < mHistory.size(); i++)
    {
      delete mHistory.at(i);
    }
    mHistory.clear();
}

void CareTaker::save()
{
    std::cout << "Save state." << std::endl;
    mHistory.push_back(mOriginator->getMemento());
}

void CareTaker::undo()
{
    if(mHistory.empty())
    {
      std::cout << "Unable to undo state." << std::endl;
      return;
    }

    Memento *m = mHistory.back();
    mOriginator->setMemento(m);
    std::cout << "Undo state." << std::endl;

    mHistory.pop_back();
    delete m;
}

/*
 * LabDoor.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/LabDoor.hpp"

using namespace std;
using namespace ProxySpace;

void LabDoor::open()
{
    cout << "Opening lab door" << endl;
}

void LabDoor::close()
{
    cout << "Closing the lab door" << endl;
}

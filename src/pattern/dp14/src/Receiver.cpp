/*
 * Receiver.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/Receiver.hpp"

using namespace std;
using namespace CommandSpace;

void Receiver::actionGo()
{
    cout << "Receiver::actionGo()" << endl;
}

void Receiver::actionCancel()
{
    cout << "Receiver::actionCancel()" << endl;
}

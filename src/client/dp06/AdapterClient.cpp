/*
 * AdapterClient.cpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#include "AdapterClient.hpp"
#include "ClassAdapter.hpp"
#include "ObjectAdapter.hpp"

using namespace AdapterSpace;

void AdapterClient::AdapterTest()
{
    // Class Adapter
    ITarget* adapter1 = new ClassAdapter();
    cout << adapter1->operation() << endl;
    // Object Adapter
    ITarget* adapter2 = new ObjectAdapter(new OldClass());
    cout << adapter2->operation() << endl;
}


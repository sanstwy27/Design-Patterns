/*
 * People.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include <iostream>
#include "../include/People.hpp"

using namespace std;
using namespace BridgeSpace;

People::People(IDrawing* drawing) {
    mDrawing = drawing;

}

void People::move()
{
    cout << "move" << endl;
    mDrawing->drawImage();
    mDrawing->drawLine();
}

void People::turn()
{
    cout << "turn" << endl;
    mDrawing->rotateImage();
    mDrawing->turnImage();
}

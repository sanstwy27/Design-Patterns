/*
 * VisitorClient.cpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#include "VisitorClient.hpp"
#include "Monkey.hpp"
#include "Lion.hpp"
#include "Dolphin.hpp"
#include "Jump.hpp"
#include "Speak.hpp"

using namespace VisitorSpace;

void VisitorClient::VisitorTest()
{
    // Element
    Monkey monkey;
    Lion lion;
    Dolphin dolphin;

    // Visitor
    Speak speak;
    Jump jump;

    monkey.accept(speak);
    monkey.accept(jump);
    lion.accept(speak);
    lion.accept(jump);
    dolphin.accept(speak);
    dolphin.accept(jump);
}

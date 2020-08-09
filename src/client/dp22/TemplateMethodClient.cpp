/*
 * TemplateMethodClient.cpp
 *
 *  Created on: Apr 6, 2020
 *      Author: sanstwy27
 */

#include "TemplateMethodClient.hpp"
#include "ConcreteClass.hpp"

using namespace TemplateMethodSpace;

void TemplateMethodClient::TemplateMethodTest()
{
    IAbstractClass *tm = new ConcreteClass;
    tm->templateMethod();
    delete tm;
}

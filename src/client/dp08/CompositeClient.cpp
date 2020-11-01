/*
 * CompositeClient.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: sanstwy27
 */

#include "CompositeClient.hpp"
#include "Composite.hpp"
#include "Leaf.hpp"

using namespace CompositeSpace;

void CompositeClient::CompositeTest()
{
    Composite root("root");
    Composite treeNode1("treeNode1");
    Composite treeNode2("treeNode2");
    Composite treeNode3("treeNode3");
    Composite treeNode4("treeNode4");
    Leaf leaf1("leaf1");
    Leaf leaf2("leaf2");

    root.add(&treeNode1);
    treeNode1.add(&treeNode2);
    treeNode2.add(&leaf1);

    root.add(&treeNode3);
    treeNode3.add(&treeNode4);
    treeNode4.add(&leaf2);

    root.operation();
}

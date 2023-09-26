#pragma once
#include "truck.hpp"

class BSTNode
{
public:
    Truck val;
    BSTNode *left;
    BSTNode *right;

    BSTNode(Truck val, BSTNode *left, BSTNode *right) : val(val),
                                                        left(left),
                                                        right(right) {}
};
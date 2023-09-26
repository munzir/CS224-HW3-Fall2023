#pragma once
#include <fstream>
#include "node.hpp"

class BinarySearchTree
{
public:
    // TODO: You have to define the functions below.
    BinarySearchTree();
    ~BinarySearchTree();

    // TODO: Design binary search tree that will be exposed to the user

private:
    BSTNode *root;

    // TODO: Design all the helper functions here that are not to be exposed to the use
};
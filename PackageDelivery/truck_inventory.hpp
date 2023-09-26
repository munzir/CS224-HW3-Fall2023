#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "node.hpp"
#include "bst.hpp"

class TruckInventory
{
private:
    BinarySearchTree bst;

public:
    // You have to define the functions below
    void loadTrucks(const string &filename);
    void makeJourney(double distance);
    void unloadTrucks(const string &filename);
};
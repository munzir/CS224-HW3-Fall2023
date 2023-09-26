#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "truck_inventory.hpp"

int main()
{
    TruckInventory truckInventory;

    truckInventory.loadTrucks("Input.txt");
    truckInventory.makeJourney(60.0);
    truckInventory.unloadTrucks("Trip.txt");
    return 0;
}

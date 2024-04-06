#ifndef BUS_H
#define BUS_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Bus: public Vehicle{
    public:
    Bus(int ID);
    int getParkingDuration();
};


#endif
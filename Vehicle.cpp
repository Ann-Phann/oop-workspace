#include <iostream>
#include "Vehicle.h"
#include <ctime>
using namespace std;

Vehicle :: Vehicle(int vehicle_id) {
    ID = vehicle_id;
}

int Vehicle :: getID() const{
    return ID;
}

int Vehicle :: getParkingDuration()
{
    time_t current_time;

    //time() function take an object of time_t type, and accept an address of an object
    time(&current_time);
    int second = difftime(current_time, timeOfEntry);
    return second;
}
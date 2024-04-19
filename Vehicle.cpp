#include <iostream>
#include "Vehicle.h"
#include <ctime>
using namespace std;

Vehicle :: Vehicle(int vehicle_id) {
    ID = vehicle_id;
    time(&timeOfEntry);
}

/*Reason why the output of GetParkingduration is negative:
the getParkingDuration() function calculates the duration between the current time and the time of entry (timeOfEntry). 
However, it seems that timeOfEntry is not initialized anywhere in the code you provided. Therefore, the result of 
difftime(current_time, timeOfEntry) might be unexpected, leading to negative values if timeOfEntry contains garbage or 
uninitialized data.*/

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
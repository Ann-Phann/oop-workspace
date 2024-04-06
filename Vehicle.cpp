#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(): Vehicle(0){};

Vehicle::Vehicle(int ID):ID(ID){
    time(&timeOfEntry);
}

int Vehicle::getID(){
    return ID;
};

int Vehicle::getParkingDuration(){
    time_t currentTime;
    time(&currentTime);
    second = difftime(currentTime,timeOfEntry);
    return second;
}




#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(): Vehicle(0){};

Vehicle::Vehicle(int ID):ID(ID){
    timeOfEntry = time(0);
}

int Vehicle::getID(){
    return ID;
};

int Vehicle::getParkingDuration(){
    giay = difftime(time(0),timeOfEntry);
    return giay;
}




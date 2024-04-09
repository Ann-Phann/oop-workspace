#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike(int ID): Vehicle(ID){};

int Motorbike::getParkingDuration(){
    giay = difftime(time(0),timeOfEntry)*85/100;
    return giay;
};

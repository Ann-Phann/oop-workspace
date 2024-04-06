#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

Bus::Bus(int ID): Vehicle(ID){};

int Bus::getParkingDuration(){
    giay = difftime(time(0),timeOfEntry)*0.75;
    return giay;
};
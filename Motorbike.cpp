#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike(int ID): Vehicle(ID){};

int Motorbike::getParkingDuration(){
    time_t currentTime;
    time(&currentTime);
    int duration = difftime(currentTime,timeOfEntry);
    second = duration - (duration * 0.15);
    return second;
};

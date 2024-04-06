#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car(int ID): Vehicle(ID){};

int Car::getParkingDuration(){
    time_t currentTime;
    time(&currentTime);
    int duration = difftime(currentTime,timeOfEntry);
    second = duration - (duration * 0.1);
    return second;
};
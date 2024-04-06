#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car(int ID): Vehicle(ID){};

int Car::getParkingDuration(){
    time_t currentTime;
    time(&currentTime);
    second = difftime(currentTime,timeOfEntry);
    return second;
};
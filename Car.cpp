#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car(int ID): Vehicle(ID){};

int Car::getParkingDuration(){
    giay = difftime(time(0),timeOfEntry)*0.9;
    return giay;
};
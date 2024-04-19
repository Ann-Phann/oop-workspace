#include <iostream>
#include <ctime>
#include "Car.h"
using namespace std;

Car :: Car(int c_id) : Vehicle(c_id)
{}

int Car :: getParkingDuration()
{
    int car_duration = 0.9* Vehicle::getParkingDuration();

    // int car_duration = Vehicle ::getParkingDuration();
    // int second = car_duration * 0.9;
    return car_duration;
}
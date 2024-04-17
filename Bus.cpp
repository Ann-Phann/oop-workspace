#include <iostream>
#include <ctime>
#include "Bus.h"
using namespace std;

Bus :: Bus(int b_id) : Vehicle(b_id){}

int Bus :: getParkingDuration()
{
    int bus_duration = 0.75 * Vehicle::getParkingDuration();
    return bus_duration;
}
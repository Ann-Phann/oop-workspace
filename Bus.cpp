#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

Bus::Bus(int ID): Vehicle(ID){};

int Bus::getParkingDuration(){
      time_t currentTime;
    time(&currentTime);
    int duration = difftime(currentTime,timeOfEntry);
    second = duration - (duration * 0.25);
    return second;
};
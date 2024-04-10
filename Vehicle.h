#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
using namespace std;

class Vehicle {
private: 
    time_t timeOfEntry;
    int ID;

public:
    Vehicle(int vehicle_id);
    int getID() const;
    int getParkingDuration(); 

};

#endif
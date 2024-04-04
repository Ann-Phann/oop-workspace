#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    int ID;
    time_t timeOfEntry;

public:
    Vehicle(int V_ID);

    int getID() const;

    time_t get_EntryTime() const;

    int getParkingDuration() const;
};

#endif // VEHICLE_H
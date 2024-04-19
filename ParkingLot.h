#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
class ParkingLot {
private:
    int max_slot;
    int current_occupied;
    Vehicle** vehicles;

public:
    ParkingLot(int capacity);

    //take a pointer to a Vehicle object and attempts to park if parking lot still has space.
    void parkVehicle(Vehicle* transport);

    //id of vehicles that will be removed from parkinglot
    void unparkVehicle(int remove_id);

    //return current numbers of vehicles in parking lot
    int getCount();

    //q3
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif // PARKINGLOT_H
#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

class ParkingLot {
    private:
        int maxSlot;
        int occupiedSlot;
        Vehicle **vehicles;
        int overstayingVehicle;
    public:
        ParkingLot(int maxSlot);
        ~ParkingLot();
        int getCount();
        int parkVehicle(Vehicle *vehicle);
        int unparkVehicle(int Parking_ID);
        int countOverstayingVehicles(int maxParkingDuration);
};


#endif
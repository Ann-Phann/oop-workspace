#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
class ParkingLot {
    private:
        
        int maxSlot;
        int occupied;
        Vehicle **vehicles;
    public:
        ParkingLot(int maxSlot);
        //~ParkingLot();
        int getCount();
       
        int parkVehicle(Vehicle *vehicle);
        int unparkVehicle(int Parking_ID);
        int countOverstayingVehicles(int maxParkingDuration);
};

#endif // PARKINGLOT_H

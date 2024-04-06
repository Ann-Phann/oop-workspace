
#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include <string>

using namespace std;
class ParkingLot {
    private:
        
        int maxSlot;
        int occupied;
        Vehicle **vehicles;
    public:
        ParkingLot(int maxSlot);
        ~ParkingLot();
        int getCount();
        //int getParkingID();
        int parkVehicle(Vehicle *vehicle);
        int unparkVehicle(int Parking_ID);
        // parameter maxParkingDuration (in seconds)
        int countOverstayingVehicles(int maxParkingDuration);
};

#endif // PARKINGLOT_H

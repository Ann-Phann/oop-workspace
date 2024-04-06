/*
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
*/
#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class ParkingLot 
{
private:
    Vehicle* vehicles;
    int capacity;
    int num_vehicles;
    int maxParkingDuration;
    int overtime_vehicles;

public:
    ParkingLot(int capacity);
    void parkVehicle(Vehicle* v1);
    void unparkVehicle(int ID);
    int getCount();
    int countOverstayingVehicles(int maxParkingDuration);

};

#endif
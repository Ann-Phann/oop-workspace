#include <iostream>
#include "ParkingLot.h"

using namespace std;

ParkingLot::ParkingLot(int maxSlot) {
    maxSlot = maxSlot;
    occupied = 0;
    vehicles = new Vehicle *[maxSlot];
    for (int i = 0; i < maxSlot; i++) {
        vehicles[i] = nullptr;
    }
}

ParkingLot::~ParkingLot()  {
    for (int i = 0; i < maxSlot; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() {
    return occupied;
}



int ParkingLot::parkVehicle(Vehicle *vehicle) {
    
    if (occupied < maxSlot) {
        vehicles[occupied] = vehicle;
        occupied++;
       return occupied;
        }
    else {
            cout << "The lot is full" << endl;
            return -1;
    }
    
}

int ParkingLot::unparkVehicle(int Parking_ID) {
    //check vehicle ID
    for (int j = 0; j < occupied; j++) {
        if(vehicles[j]->getID() == Parking_ID) {
            delete vehicles[j];

            for (int k = j; k < occupied -1; k++) {
                vehicles[k] = vehicles[k + 1];
            }
            occupied--; 
            return 0;
        }
        else {
            cout << "Vehicle not in the lot" << endl;
        }
    }

    
}

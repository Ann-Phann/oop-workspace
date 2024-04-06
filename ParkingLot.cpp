#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "ParkingLot.h"

using namespace std;

ParkingLot::ParkingLot(int maxSlot) {
    this->maxSlot = maxSlot;
    occupiedSlot = 0;
    vehicles = new Vehicle *[maxSlot];
    for (int i = 0; i < maxSlot; i++) {
        vehicles[i] = nullptr;
    }
}

ParkingLot::~ParkingLot() {
    // for (int i = 0; i < maxSlot; i++) {
    //     if (vehicles[i] != nullptr) {
    //         delete vehicles[i];
    //     }
    // }
    delete[] vehicles;
}


int ParkingLot::getCount() {
    return occupiedSlot;
}



int ParkingLot::parkVehicle(Vehicle *vehicle) {
    
    if (occupiedSlot < maxSlot) {
        vehicles[occupiedSlot] = vehicle;
        occupiedSlot++;
       return occupiedSlot;
        }
    else {
            cout << "The lot is full" << endl;
            return -1;
    }
    
}

int ParkingLot::unparkVehicle(int Parking_ID) {
    for (int j = 0; j < occupiedSlot; j++) {
        if (vehicles[j] != nullptr && vehicles[j]->getID() == Parking_ID) {
            delete vehicles[j];
            vehicles[j] = nullptr; // Set the pointer to nullptr after deletion

            // Shift remaining vehicles in the array
            for (int k = j; k < occupiedSlot - 1; k++) {
                vehicles[k] = vehicles[k + 1];
            }
            occupiedSlot--;
            return 0;
        }
    }
    cout << "Vehicle not in the lot" << endl;
    return -1; // Indicate failure to find the vehicle
}
int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    for (int i = 0; i < maxSlot; i++) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}
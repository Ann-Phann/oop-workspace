/*
#include <iostream>
#include "ParkingLot.h"

using namespace std;

ParkingLot::ParkingLot(int maxSlot) {
    this->maxSlot = maxSlot;
    occupied = 0;
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
    for (int j = 0; j < occupied; j++) {
        if (vehicles[j] != nullptr && vehicles[j]->getID() == Parking_ID) {
            delete vehicles[j];
            vehicles[j] = nullptr; // Set the pointer to nullptr after deletion

            // Shift remaining vehicles in the array
            for (int k = j; k < occupied - 1; k++) {
                vehicles[k] = vehicles[k + 1];
            }
            occupied--;
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

*/

#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "ParkingLot.h"
using namespace std;

ParkingLot::ParkingLot(int capacity) : capacity(capacity){
    vehicles = new Vehicle[capacity];
    num_vehicles = 0;
}

void ParkingLot::parkVehicle(Vehicle *v1){
    if (num_vehicles < capacity){
        vehicles[num_vehicles] = *v1;
        num_vehicles++;
    }

    else {
        cout << "The lot is full" << endl;
    }
};

void ParkingLot::unparkVehicle(int ID){
    for (int i = 0; i < num_vehicles; i++) {
        if (vehicles[i].getID() == ID) {
            vehicles[i] = NULL;

            num_vehicles--;

            return;
        }
    }
    cout << "Vehicle not in the lot" << endl;
};

int ParkingLot::getCount(){
    return num_vehicles;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    overtime_vehicles = 0;
    for (int i = 0; i < num_vehicles; i++){
        if (vehicles[i].getParkingDuration() > maxParkingDuration){
            overtime_vehicles++;
        }
    }
    return overtime_vehicles;
};
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

/*ParkingLot::~ParkingLot() {
    for (int i = 0; i < maxSlot; i++) {
        if (vehicles[i] != nullptr) {
            delete vehicles[i];
        }
    }
    delete[] vehicles;
}
*/

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
    // int carOverstaying = 0;
    // int busOverstaying = 0;
    // int bikeOverstaying = 0;
    int totalOverstaying = 0;

    for (int k = 0; k < occupied; k++) {
        if (vehicles[k] != nullptr) {
            //string vName = vehicles[k]->getVehicle();
            int parkingDuration = vehicles[k]->getParkingDuration();

            if (parkingDuration > maxParkingDuration) {
                totalOverstaying++;
                
                // if (vName == "Car") {
                //     carOverstaying += parkingDuration - maxParkingDuration;
                // } else if (vName == "Bus") {
                //     busOverstaying += parkingDuration - maxParkingDuration;
                // } else {
                //     bikeOverstaying += parkingDuration - maxParkingDuration;
                // }
            }
        }
    }

    /* cout << "Car overstayed: " << carOverstaying << endl;
    cout << "Bus overstayed: " << busOverstaying << endl;
    cout << "Motorbike overstayed: " << bikeOverstaying << endl; */

    return totalOverstaying;
}



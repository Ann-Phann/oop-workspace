#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include <unistd.h>      

using namespace std;

// create an object of Parkangle, class with a capacity of 10 vehicles
int main() {
    ParkingLot s2(10);
    int V_ID = 1;
    int maxParkingDuration = 15;

    while (s2.getCount() < 10) {
        string vehicleType;
        cout << "Type of vehicle you want to park: ";
        cin >> vehicleType;

        Vehicle *parkingVehicle = nullptr;

        if(vehicleType == "Car" || vehicleType == "Bus" || vehicleType == "Motorbike") {
            parkingVehicle = new Vehicle(V_ID++);
            parkingVehicle->setVehicle(vehicleType);
            int ParkingID = s2.parkVehicle(parkingVehicle);
            if (ParkingID != -1) {
                cout << "Vehicle parked successfully. Park ID: " << ParkingID << endl;
                sleep(1);
            } else {
                cout << "The lot is full" << endl;
                //delete parkingVehicle;
                break;
            }
        } else {
            cout << "Invalid Vehicle. Please enter Car, Bus, or Motorbike" << endl;
            continue;
        }        
    }
    
    cout << "Number of vehicles that have overstayed in the parking lot for more than 15 seconds: " << s2.countOverstayingVehicles(maxParkingDuration) << endl;
}
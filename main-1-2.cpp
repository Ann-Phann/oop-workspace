#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main() {
    ParkingLot s1(10);

    while (s1.getCount() < 10) {
        string vehicleType;
        cout << "Type of vehicle you want to park: ";
        cin >> vehicleType;

        int V_ID = 1;
        Vehicle *parkingVehicle = nullptr;

        if(vehicleType == "Car" || vehicleType == "Bus" || vehicleType == "Motorbike") {
            parkingVehicle = new Vehicle(V_ID++);
            int ParkingID = s1.parkVehicle(parkingVehicle); // Park the vehicle immediately after creating it
            if (ParkingID != -1) {
                cout << "Vehicle parked successfully. Park ID: " << ParkingID << endl;
            } else {
                delete parkingVehicle; // Free memory for the unparked vehicle
                break; // Exit the loop as parking lot is full
            }
        } else {
            cout << "Invalid Vehicle. Please enter Car, Bus, or Motorbike" << endl;
            continue;
        }        
    }

    return 0;
}
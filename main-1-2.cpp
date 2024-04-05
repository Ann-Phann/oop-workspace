#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"

using namespace std;

int main() {
    ParkingLot s1(10);
    int V_ID = 1;

    while (s1.getCount() < 10) {
        string vehicleType;
        cout << "Type of vehicle you want to park: ";
        cin >> vehicleType;

        Vehicle *parkingVehicle = nullptr;

        if(vehicleType == "Car" || vehicleType == "Bus" || vehicleType == "Motorbike") {
            parkingVehicle = new Vehicle(V_ID++);
            int ParkingID = s1.parkVehicle(parkingVehicle);
            if (ParkingID != -1) {
                cout << "Vehicle parked successfully. Park ID: " << ParkingID << endl;
            } else {
                cout << "The lot is full" << endl;
                delete parkingVehicle;
                break;
            }
        } else {
            cout << "Invalid Vehicle. Please enter Car, Bus, or Motorbike" << endl;
            continue;
        }        
    }

    // Prompt user for the ID they want to unpark
    int unparkID;
    cout << "Enter the ID of the vehicle you want to unpark: ";
    cin >> unparkID;

    // Unpark the vehicle with the specified ID
    int result = s1.unparkVehicle(unparkID);
    if (result == 0) {
        cout << "Vehicle unparked successfully." << endl;
    } else if (result == -1) {
        cout << "Vehicle not in the lot" << endl;
    }

    return 0;
}
#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include <unistd.h>
using namespace std;

int main() {
    ParkingLot s2(10);
    int V_ID = 1;
    int maxParkingTime = 0;

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
    sleep(16);
    //Count the number of overstayed vehicles
   int result = s2.countOverstayingVehicles(maxParkingTime);
    cout << "Total overstaying vehicles: " << result << endl;
    return 0;
}

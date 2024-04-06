#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"

using namespace std;

// int main() {
//     ParkingLot s2(10);
//     int V_ID = 1;
//     int maxParkingTime = 0;

//     while (s2.getCount() < 10) {
//         string vehicleType;
//         cout << "Type of vehicle you want to park: ";
//         cin >> vehicleType;

//         Vehicle *parkingVehicle = nullptr;

//         if(vehicleType == "Car" || vehicleType == "Bus" || vehicleType == "Motorbike") {
//             parkingVehicle = new Vehicle(V_ID++);
//             parkingVehicle->setVehicle(vehicleType);
//             int ParkingID = s2.parkVehicle(parkingVehicle);
//             if (ParkingID != -1) {
//                 cout << "Vehicle parked successfully. Park ID: " << ParkingID << endl;
//             } else {
//                 cout << "The lot is full" << endl;
//                 delete parkingVehicle;
//                 break;
//             }
//         } else {
//             cout << "Invalid Vehicle. Please enter Car, Bus, or Motorbike" << endl;
//             continue;
//         }        
//     }
    
//     //Count the number of overstayed vehicles
//    int result = s2.countOverstayingVehicles(maxParkingTime);
//     cout << "Total overstaying vehicles: " << result << endl;
//     return 0;
// }

int main() {
    ParkingLot parkingLot(10);
    int maxParkingDuration = 15;

    // Park 5 Car objects
    for (int i = 0; i < 5; ++i) {
        Vehicle* car = new Vehicle(i + 1);
        car->setVehicle("Car");
        parkingLot.parkVehicle(car);
    }

    // Park 3 Bus objects
    for (int i = 0; i < 3; ++i) {
        Vehicle* bus = new Vehicle(i + 6); // Start ID from 6 for buses
        bus->setVehicle("Bus");
        parkingLot.parkVehicle(bus);
    }

    // Park 2 Motorbike objects
    for (int i = 0; i < 2; ++i) {
        Vehicle* motorbike = new Vehicle(i + 9); // Start ID from 9 for motorbikes
        motorbike->setVehicle("Motorbike");
        parkingLot.parkVehicle(motorbike);
    }

    // Count overstaying vehicles
    int overstayingCount = parkingLot.countOverstayingVehicles(maxParkingDuration);
    std::cout << "Number of overstaying vehicles: " << overstayingCount << std::endl;

    return 0;
}
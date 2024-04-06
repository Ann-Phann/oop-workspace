#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include <unistd.h>      

using namespace std;

// create an object of Parkangle, class with a capacity of 10 vehicles
// int main() {
//     ParkingLot s2(10);
//     int V_ID = 1;
//     int maxParkingDuration = 15;

//     while (s2.getCount() < 10) {
//         string vehicleType;
//         cout << "Type of vehicle you want to park: ";
//         cin >> vehicleType;

//         Vehicle *parkingVehicle = nullptr;

//         if(vehicleType == "Car" || vehicleType == "Bus" || vehicleType == "Motorbike") {
//             parkingVehicle = new Vehicle(V_ID++);
//             //parkingVehicle->setVehicle(vehicleType);
//             int ParkingID = s2.parkVehicle(parkingVehicle);
//             if (ParkingID != -1) {
//                 cout << "Vehicle parked successfully. Park ID: " << ParkingID << endl;
//             } else {
//                 cout << "The lot is full" << endl;
//                 break;
//             }
//         } else {
//             cout << "Invalid Vehicle. Please enter Car, Bus, or Motorbike" << endl;
//             continue;
//         }        
//     }
    
//     cout << "Number of vehicles that have overstayed in the parking lot for more than 15 seconds: " << s2.countOverstayingVehicles(maxParkingDuration) << endl;
// }

#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include <unistd.h>

using namespace std;

int main() {
    // Create a ParkingLot object with a capacity of 10 vehicles
    ParkingLot s2(10);
    int V_ID = 1;
    int maxParkingDuration = 15;

    // Input 5 Car objects
    for (int i = 0; i < 5; ++i) {
        Vehicle* car = new Vehicle(V_ID++);
        s2.parkVehicle(car);
    }

    // Input 3 Bus objects
    for (int i = 0; i < 3; ++i) {
        Vehicle* bus = new Vehicle(V_ID++);
        s2.parkVehicle(bus);
    }

    // Input 2 Motorbike objects
    for (int i = 0; i < 2; ++i) {
        Vehicle* motorbike = new Vehicle(V_ID++);
        s2.parkVehicle(motorbike);
    }

    // Simulate time passing
    sleep(16); // Assuming time has passed more than maxParkingDuration for all vehicles

    // Perform test case: Count the number of vehicles that have overstayed
    int overstayingCount = s2.countOverstayingVehicles(maxParkingDuration);
    cout << "Number of vehicles that have overstayed in the parking lot for more than "
         << maxParkingDuration << " seconds: " << overstayingCount << endl;

    // Free allocated memory
    
    

    return 0;
}

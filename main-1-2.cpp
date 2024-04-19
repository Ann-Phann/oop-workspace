#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main(void) {
    int capacity = 10;
    ParkingLot p1(capacity); //parking lot with capacity of 10
    
    //create an array of parking vehicle
    Vehicle* parkingVehicle[capacity];

    //park vehicles
    for (int i = 0; i < capacity; i++)
    {
        string type_vehicle;
        cout << "type of vehicle you want to park? ";
        cin >> type_vehicle;

        if (type_vehicle == "Car" || type_vehicle == "Bus" || type_vehicle == "Motorbike")
        {
            parkingVehicle[i] = new Vehicle(i); 
        }
        p1.parkVehicle(parkingVehicle[i]);
    }

    //unpark vehicle from parking lot
    int remove_id;
    cout << "ID of vehicle you want to remove: ";
    cin >> remove_id;
    p1.unparkVehicle(remove_id);

    //get numbers of vehicle currently is in the parking lot
    cout << "current number of vehicles: " << p1.getCount() << endl;

}
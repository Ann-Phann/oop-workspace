#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main (void)
{
    int capacity = 10;
    Vehicle* parkVehicle[capacity];
    ParkingLot p2(capacity);
    for (int i = 0; i < capacity; i++)
    {
        string type;
        cout << "type vehicle: ";
        cin >> type;
        if (type == "Car" || type == "Bus" || type =="Motorbike")
        {
            parkVehicle[i] = new Vehicle(i);
        }
        p2.parkVehicle(parkVehicle[i]);
    }
    int overstay_vehicle = p2.countOverstayingVehicles(15);
    cout << "Number of vehicle overstayed: " << overstay_vehicle << endl;
}


//what if? i dont want to put every objects into the array then park one of each. 
//instead i wanna have one object being parked then put into array, then go to the next object.
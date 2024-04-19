#include <iostream>
#include "ParkingLot.h"

using namespace std;

ParkingLot :: ParkingLot(int capacity) 
{
    max_slot = capacity;
    current_occupied = 0;
    vehicles = new Vehicle* [capacity];
}

int ParkingLot :: getCount()
{
    return current_occupied;
}

void ParkingLot ::parkVehicle(Vehicle* transport)
{
    if (current_occupied < max_slot)
    {
        vehicles[current_occupied] = transport;
        current_occupied++;
        cout << "Park successfully. Park ID: "<< transport->getID() << endl;
    } else {
        cout << "The lot is full" << endl;
    }
}

void ParkingLot :: unparkVehicle(int remove_id)
{
    for (int i = 0; i < current_occupied; i++)
    {
        if (vehicles[i]->getID() == remove_id)
        {
            delete vehicles[i];
            vehicles[i] = nullptr;
            //After deleting the object, the pointer vehicles[i] still exists, but it now points to memory that has been deallocated. It's a good practice to set the pointer to nullptr after deletion to avoid potential issues if the pointer is accidentally dereferenced later.

            // shift remaining vehicles to the left
            for (int j = i; j < current_occupied; j++)
            {
                vehicles[j] = vehicles[j+1];
            }
            current_occupied--;
        }
        // can't be like this cause it will print lots of "not in the lot"
        // } else {
        //     cout << "Vehicle not in the lot" << endl;
        // }
    }
    cout << "Vehicle not in the lot" << endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration)
{
    int overstay_vehicle = 0;
    for(int i = 0; i < current_occupied; i++)
    {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration)
        {
            overstay_vehicle++;
        }
    }
    return overstay_vehicle;
}


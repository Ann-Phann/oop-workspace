#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "ParkingLot.h"

using namespace std;

ParkingLot::ParkingLot(int capacity) : capacity(capacity)
{
    vehicles = new Vehicle[capacity];
    num_vehicles = 0;
}

void ParkingLot::parkVehicle(Vehicle *v1)
{
    if (num_vehicles < capacity)
    {
        vehicles[num_vehicles] = *v1;
        num_vehicles++;
    }
    else
    {
        cout << "The lot is full" << endl;
    }
};

void ParkingLot::unparkVehicle(int ID)
{
    for (int i = 0; i < num_vehicles; i++)
    {
        if (vehicles[i].getID() == ID)
        {
            vehicles[i] = NULL;
            num_vehicles--;
            return;
        }
    }
    cout << "Vehicle not in the lot" << endl;
};

int ParkingLot::getCount()
{
    return num_vehicles;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration)
{
    overtime_vehicles = 0;
    for (int i = 0; i < num_vehicles; i++)
    {
        if (vehicles[i].getParkingDuration() > maxParkingDuration)
        {
            overtime_vehicles++;
        }
    }
    return overtime_vehicles;
};

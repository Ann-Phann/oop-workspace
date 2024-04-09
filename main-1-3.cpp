#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main()
{
    ParkingLot pl1(10);
    Vehicle *v1[9];
    string ans[9];
    int ans_ID;

    for (int i = 0; i < 10; i++)
    {
        cout << "What's type of vehicle you want to add to the parking lot? " << endl;
        cin >> ans[i];
        cout << "Please enter ID of your vehicle: " << endl;
        cin >> ans_ID;
        if (ans[i] == "Car")
        {
            v1[i] = new Car(ans_ID);
        }
        else if (ans[i] == "Bus")
        {
            v1[i] = new Bus(ans_ID);
        }
        else if (ans[i] == "Motorbike")

        {
            v1[i] = new Motorbike(ans_ID);
        }
        pl1.parkVehicle(v1[i]);
    }
    int overdue = pl1.countOverstayingVehicles(15);
    cout << "The number of vehicles that have overstayed in the parking lot for more than 10 seconds: " << overdue << endl;
}
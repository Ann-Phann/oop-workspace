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
    Vehicle *v1[11];
    string ans[11];
    int ans_ID;
    int i = 0;
    ans_ID = 0;

    for (int i = 0; i < 11; i++)
    {
        ans_ID = 0;
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

    int ID_removed;
    cout << "Please enter the ID of vehicle you want to remove: " << endl;
    cin >> ID_removed;
    pl1.unparkVehicle(ID_removed);

    cout << "The number of vehicles in the parking lot is: " << pl1.getCount() << endl;

    return 0;
}
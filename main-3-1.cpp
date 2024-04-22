#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"
using namespace std;

int main(void)
{
    int numApp = 3;
    House home(numApp);
    Appliance* app_array[numApp];

    for (int i = 0; i < numApp; i++)
    {
        string type_app;
        cout << "type: ";
        cin >> type_app;

        int powerRating;
        cout << "power rate: ";
        cin >> powerRating;

        if (type_app == "TV")
        {
            double screen;
            cout << "screen size: ";
            cin >> screen;
            app_array[i] = new TV(powerRating, screen);
        } 
        else if (type_app == "Fridge") {
            double volume;
            cout << "volume: ";
            cin >> volume;
            app_array[i] = new Fridge(powerRating, volume);
        }

        if(home.addAppliance(app_array[i]))
        {
            cout << type_app << " successfully added" << endl;
        } else {
            cout << "house is full" << endl;
        }
    }
    cout << "Total power consumption: " << home.getTotalPowerConsumption() << endl;
    cout << "Total number of appliances: " << home.get_current() << endl;

    for (int j = 0; j < numApp; j++)
    {
        delete app_array[j];
    }
}
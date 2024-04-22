#include <iostream>
#include <vector>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"
using namespace std;

int main(void)
{
    int numApp = 3;
    House home(numApp);
    vector<Appliance*> app_array;

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
            app_array.push_back(new TV(powerRating, screen));
        } 
        else if (type_app == "Fridge") {
            double volume;
            cout << "volume: ";
            cin >> volume;
            app_array.push_back(new Fridge(powerRating, volume));
        }

        if(home.addAppliance(app_array.back()))
        {
            cout << type_app << " successfully added" << endl;
        } else {
            cout << "house is full" << endl;
        }
    }
    cout << "Total power consumption: " << home.getTotalPowerConsumption() << endl;
    cout << "Total number of appliances: " << home.get_current() << endl;

    // Clean up dynamically allocated memory
    for (Appliance* app : app_array) {
        delete app;
    }
}
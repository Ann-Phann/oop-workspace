#include <iostream>
#include "Appliance.h"
using namespace std;

int main (void)
{
// Create an Appliance object using the default constructor
    Appliance appliance1;

    // Turn on the appliance
    appliance1.turnOn();

    // Set the power rating of the appliance
    appliance1.set_powerRating(1000);

    // Print the power rating and mode of the appliance
    cout << "Appliance 1 power rating: " << appliance1.get_powerRating() << endl;
    if(appliance1.get_isOn())
    {
        cout << "On" << endl;
    } else {
        cout << "Off" << endl;
    }

    // Create another Appliance object using the parameterized constructor
    Appliance appliance2(1500);

    // Turn off the appliance
    appliance2.turnOff();

    // Print the power rating and mode of the appliance
    cout << "Appliance 2 power rating: " << appliance2.get_powerRating() << endl;
    cout << "Appliance 2 mode: " << (appliance2.get_isOn() ? "On" : "Off") << endl;
    
}
#include "Helicopter.h"
#include <iostream>
using namespace std; 

Helicopter ::Helicopter(int w, string n) : AirCraft(w)
{
    name = n;
}
void Helicopter::fly(int headwind, int minutes) {
    // First, check if current fuel is below 20% to prevent the flight
    if (get_fuel() < 20) {
        cout << "Not enough fuel to start the flight." << endl;
        return;
    }

    float baseFuelUse = 0.2 * minutes; // Base fuel use rate

    if (headwind > 40) {
        baseFuelUse = 0.4 * minutes; // Increased fuel use in high headwind
    }

    if (get_weight() > 5670) {
        baseFuelUse += 0.01 * (get_weight() - 5670) * minutes; // Additional fuel for extra weight
    }

    float remainingFuel = get_fuel() - baseFuelUse;

    // Second, check if the remaining fuel after the flight would be less than 20%
    if (remainingFuel < 20) {
        cout << "Not enough fuel remaining after the flight." << endl;
        return; // Do not proceed with flight
    }

    // Update the fuel and increment the number of flights
    set_fuel(remainingFuel);
    set_numberOfFlights(get_numberOfFlights() + 1);
}
    
    //get set method
string Helicopter :: get_name()
{
    return name;
}
    
void Helicopter :: set_name(string name)
{
    this -> name = name;
}


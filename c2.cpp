#include <iostream>
#include "Helicopter.h"

using namespace std;

Helicopter::Helicopter() : name("") {}

Helicopter::Helicopter(int w, std::string n) : AirCraft(w), name(n) {}

void Helicopter::fly(int headwind, int minutes) {
    if (fuel < 20)  // Prevent takeoff if fuel is less than 20%
        return;

    float fuelUsed = 0.2 * minutes;

    if (headwind >= 40)
    {
        fuelUsed = 0.4 * minutes;
    }

    if (weight > 5670)
    {
        fuelUsed += 0.01 * minutes;
    }

    fuel -= fuelUsed;
    numberOfFlights++;
}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(const std::string& n) {
    name = n;
}

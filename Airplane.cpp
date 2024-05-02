#include <iostream>
#include "Airplane.h"
using namespace std;


// Initialize with default values
Airplane::Airplane() : numPassengers(0) {
    
}

Airplane::Airplane(int w, int p) : AirCraft(w), numPassengers(p) {
}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::reducePassengers(int x) {
     numPassengers -= x;
  // Prevent negative passenger counts
    if (numPassengers < 0)
    {
        numPassengers = 0;
    } 
}

void Airplane::fly(int headwind, int minutes) {
    if (fuel < 20) {
        return;  // Prevent flying if initial fuel is less than 20%
    }

    float fuelConsumptionRate = (headwind >= 60) ? 0.5 : 0.3;
    float fuelUsed = (fuelConsumptionRate + 0.001 * numPassengers) * minutes;

    if (fuel - fuelUsed < 20) {  // Check if post-flight fuel would be below 20%
        return;
    }

    fuel -= fuelUsed;
    numberOfFlights++;
}

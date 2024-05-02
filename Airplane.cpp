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

void Airplane::fly(int headwind, int minutes)
{
    if (fuel < 20)
    {
        return;
    }

    float fuelUsed = 0.3 * minutes;

    if (headwind >= 60)
    {
        fuelUsed = 0.5 * minutes;
    }

    if (fuel - fuelUsed < 20)  // Check if fuel would be below 20% after flight
        return;

    fuelUsed += 0.001 * numPassengers * minutes;

    
    fuel -= fuelUsed;
    numberOfFlights++;
}

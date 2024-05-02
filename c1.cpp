#include <iostream>
#include "AirCraft.h"

using namespace std;
// Default constructor
AirCraft::AirCraft() : weight(0), fuel(100.0), numberOfFlights(0) {}

// Constructor with weight initialization
AirCraft::AirCraft(int w) : weight(w), fuel(100.0), numberOfFlights(0) {}

// Resets fuel to 100%
void AirCraft::refuel() {
    fuel = 100;
}

// Increments number of flights
void AirCraft::fly(int headwind, int minutes) {
    numberOfFlights++;
}

// Getters and setters
int AirCraft::get_weight() const {
    return weight;
}

void AirCraft::set_weight(int w) {
    weight = w;
}

float AirCraft::get_fuel() const {
    return fuel;
}

void AirCraft::set_fuel(float f) {
    fuel = f;
}

int AirCraft::get_numberOfFlights() const {
    return numberOfFlights;
}

void AirCraft::set_numberOfFlights(int n) {
    numberOfFlights = n;
}

#include "AirFleet.h"

AirFleet::AirFleet() {
    fleet = new AirCraft*[5]; // Allocate space for 5 aircraft pointers
    fleet[0] = new Airplane(20, 10);              // Airplane with 20 weight and 10 passengers
    fleet[1] = new Helicopter(10000, "BlackHawk");// Helicopter with 10000 weight, "BlackHawk" name
    fleet[2] = new AirCraft(5000);                // AirCraft with 5000 weight
    fleet[3] = new Helicopter(100, "WhiteHawk");  // Helicopter with 100 weight, "WhiteHawk" name
    fleet[4] = new Airplane(15, 20);              // Airplane with 15 weight and 20 passengers
}

AirFleet::~AirFleet() {
    for (int i = 0; i < 5; ++i) {
        delete fleet[i];  // Free each aircraft object
    }
    delete[] fleet;       // Free the array of pointers
}

AirCraft **AirFleet::get_fleet() {
    return fleet;
}

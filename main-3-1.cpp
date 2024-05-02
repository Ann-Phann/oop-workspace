#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet myFleet;  // Create a fleet of aircraft
    AirCraft **fleet = myFleet.get_fleet();

    // Output details of each aircraft in the fleet
    for (int i = 0; i < 5; ++i) {
        std::cout << "Aircraft " << i+1 << " has weight: " << fleet[i]->get_weight() << std::endl;
        std::cout << "Fuel at start: " << fleet[i]->get_fuel() << "%" << std::endl;
        fleet[i]->fly(30, 60);  // Fly each aircraft for 60 minutes with 30 km/h headwind
        std::cout << "Fuel after flight: " << fleet[i]->get_fuel() << "%" << std::endl;
    }

    return 0;
}

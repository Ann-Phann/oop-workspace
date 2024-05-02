#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"

class AirFleet {
private:
    AirCraft **fleet;  // Array of pointers to AirCraft objects

public:
    AirFleet();  // Constructor that initializes the fleet with specific aircraft
    ~AirFleet(); // Destructor to manage memory
    AirCraft **get_fleet(); // Getter for the fleet array
};

#endif // AIRFLEET_H


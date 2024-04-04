#include "Vehicle.h"

Vehicle::Vehicle(int V_ID) : ID(V_ID) {
    time(&timeOfEntry);
}

int Vehicle::getID() const {
    return ID;
}

time_t Vehicle::get_EntryTime() const {
    return timeOfEntry;
}

int Vehicle::getParkingDuration() const {
    time_t currentTime;
    time(&currentTime);
    return difftime(currentTime, timeOfEntry);
}


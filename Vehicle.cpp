#include "Vehicle.h"
Vehicle::Vehicle(){

}

Vehicle::Vehicle(int V_ID) : ID(V_ID) {
    time(&timeOfEntry);
}

int Vehicle::getID() const {
    return ID;
}

time_t Vehicle::get_EntryTime() const {
    return timeOfEntry;
}

int Vehicle::getParkingDuration()  {
    time_t currentTime;
    time(&currentTime);
    return difftime(currentTime, timeOfEntry);
}

//void Vehicle::setVehicle(string vehicleName) {
//     this->vehicleType = vehicleName;
// }

//string Vehicle::getVehicle() {
//     return vehicleType;
// }
#include "Bus.h"

Bus::Bus(int ID) : Vehicle(ID) {
}

int Bus::getParkingDuration() {
    int busDuration = Vehicle::getParkingDuration();
    // 25% reduction
    return busDuration - (busDuration * 0.25);
}
#include "Motorbike.h"

Motorbike::Motorbike(int ID) : Vehicle(ID) {
}

int Motorbike::getParkingDuration() {
    int bikeDuration = Vehicle::getParkingDuration();
    // 15% reduction
    return bikeDuration - (bikeDuration * 0.15); // Corrected to 15% reduction
}
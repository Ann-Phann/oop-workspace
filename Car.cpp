#include "Car.h"

Car::Car(int ID) : Vehicle(ID) {
}

int Car::getParkingDuration() {
    int carDuration = Vehicle::getParkingDuration();
    // 10% reduction
    return carDuration - (carDuration * 0.1);
}

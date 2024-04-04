#include <ctime>
#include <iostream>
using namespace std;


class Vehicle {
private:
    int ID;
    time_t timeOfEntry;

public:
Vehicle(int V_ID) : ID(V_ID) {
  time(&timeOfEntry);
}

int getID() const { return ID; }

time_t get_EntryTime() const { return timeOfEntry; }

int getParkingDuration() const { 
    time_t currentTime;
    time(&currentTime);
    return difftime(currentTime, timeOfEntry);
 }
};

class Car : public Vehicle {
    public:
    Car(int ID) : Vehicle( ID) {
}

int getParkingDuration() {
    int carDuration = Vehicle::getParkingDuration();
    // 10% reduction
    return carDuration - (carDuration * 0.1);
}
};

class Bus : public Vehicle {
    public:
        Bus(int ID) : Vehicle( ID) {
    }

        int getParkingDuration() {
         int busDuration = Vehicle::getParkingDuration();
    // 25% reduction
    return busDuration - (busDuration * 0.25);
    }
};

class Motorbike : public Vehicle {
    public:
        Motorbike(int ID) : Vehicle( ID) {
    }

        int getParkingDuration() {
         int bikeDuration = Vehicle::getParkingDuration();
    // 15% reduction
    return bikeDuration - (bikeDuration * 0.1);
    }
};

#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
#include <string>
using namespace std;

class Vehicle {
private:
    int ID;
    time_t timeOfEntry;
    //string vehicleType;

public:
    Vehicle();
    Vehicle(int V_ID);

    int getID() const;

    time_t get_EntryTime() const;

    int getParkingDuration() ;

    //void setVehicle(string vehicleName);
    //string getVehicle();
};

#endif // VEHICLE_H
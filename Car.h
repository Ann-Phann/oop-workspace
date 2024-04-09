#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
private:
    int giay;

public:
    Car(int ID);
    int getParkingDuration();
};

#endif
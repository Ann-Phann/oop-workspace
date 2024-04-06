#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
private:
    int second;

public:
    Car(int ID);
    int getParkingDuration();
};

#endif
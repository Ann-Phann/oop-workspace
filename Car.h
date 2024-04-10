#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <ctime>

class Car : public Vehicle {

public:
    Car(int c_id);
    int getParkingDuration();
    
};
#endif
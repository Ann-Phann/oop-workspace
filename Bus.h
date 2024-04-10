#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"
#include <ctime>

class Bus : public Vehicle {
private:
public:
    Bus(int b_id);
    int getParkingDuration();
    
};
#endif
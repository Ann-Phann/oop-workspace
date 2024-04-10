#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"
#include <ctime>

class Motorbike : public Vehicle {
private:
public:
    Motorbike(int m_id);
    int getParkingDuration();
    
};
#endif
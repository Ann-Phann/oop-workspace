#include <iostream>
#include <ctime>
#include "Motorbike.h"
using namespace std;

Motorbike :: Motorbike(int m_id) : Vehicle(m_id)
{}

int Motorbike ::getParkingDuration()
{
    int motor_duration = 0.85 * Vehicle::getParkingDuration();
    return motor_duration;
}
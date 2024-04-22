#include <iostream>
#include "TV.h"
using namespace std;

TV :: TV() : Appliance()
{
    screenSize = 0.0;
}

TV :: TV(int powerRating, double screenSize) : Appliance(powerRating)
{
    this-> screenSize = screenSize;
}

void TV :: setScreenSize(double screenSize)
{
    this-> screenSize = screenSize;
}
    
double TV :: getScreenSize()
{
    return screenSize;
}

double TV :: getPowerConsumption()
{
    double power_consume;
    power_consume = get_powerRating() * (screenSize/10);
    return power_consume;
}
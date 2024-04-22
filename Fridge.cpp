#include <iostream>
#include "Fridge.h"
using namespace std;

Fridge :: Fridge() : Appliance()
{
    volume = 0.0;
}
    
Fridge :: Fridge(int powerRating, double volume) : Appliance(powerRating)
{
    this->volume = volume;
}

void Fridge :: setVolume(double volume)
{
    this-> volume = volume;
}

double Fridge :: getVolume()
{
    return volume;
}

double Fridge :: getPowerConsumption()
{
    double power_consume;
    power_consume = get_powerRating() * 24 * volume/100;
    return power_consume;
}
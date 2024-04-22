#include <iostream>
#include "Appliance.h"
using namespace std;

Appliance :: Appliance() : powerRating(0), isOn(false) 
{}

Appliance ::  ~Appliance()
{}

Appliance :: Appliance(int powerRating)
{
    this->powerRating = powerRating;
}

void Appliance :: turnOn()
{
    isOn = true;
}

void Appliance :: turnOff()
{
    isOn = false;
}

double Appliance :: getPowerConsumption()
{
    return 0;
}

void Appliance :: set_powerRating(int power)
{
    powerRating = power;
}

int Appliance :: get_powerRating()
{
    return powerRating;
}

void Appliance :: set_isOn(bool mode)
{
    isOn = mode;
}

bool Appliance :: get_isOn()
{
    return isOn;
}
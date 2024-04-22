#include <iostream>
#include "Appliance.h"
using namespace std;

Appliance :: Appliance() : powerRating(0), isOn(false) 
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

void Appliance :: set_power(int power)
{
    powerRating = power;
}

int Appliance :: get_power()
{
    return powerRating;
}

void Appliance :: set_mode(bool mode)
{
    isOn = mode;
}

bool Appliance :: get_mode()
{
    return isOn;
}
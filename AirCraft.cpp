#include <iostream>
#include "AirCraft.h"
using namespace std;

AirCraft :: AirCraft() 
{
    weight = 0;
    fuel = 100/100;
    numberOfFlights = 0;
}

AirCraft :: AirCraft(int w)
{
    weight = w;
    fuel = 100;
    numberOfFlights = 0;
}

void AirCraft :: refuel ()
{
    fuel = 100;
}

void AirCraft :: fly (int headwind, int minutes)
{
    numberOfFlights++;
}

int AirCraft :: get_weight()
{
    return weight;
}
    
void AirCraft :: set_weight(int weight)
{
    this-> weight = weight;
}

int AirCraft ::  get_fuel()
{
    return fuel;
}

void AirCraft :: set_fuel(float fuel_value)
{
    fuel = fuel_value;
}

int AirCraft :: get_numberOfFlights()
{
    return numberOfFlights;
}

void AirCraft :: set_numberOfFlights(int number)
{
    numberOfFlights = number;
}
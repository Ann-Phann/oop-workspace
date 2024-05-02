#include "Helicopter.h"
#include <iostream>
using namespace std; 

Helicopter ::Helicopter(int w, string n) : AirCraft(w)
{
    name = n;
}
void Helicopter :: fly(int headwind, int minutes)
{
    float fuel_use;
    
    fuel_use =  0.2*minutes;

    if (headwind > 40)
    {
        fuel_use = 0.4* minutes;
    }

    if (get_weight() > 5670)
    {
        fuel_use += 0.01* (get_weight() - 5670) * minutes;
    }

    float remain_fuel = get_fuel() - fuel_use;
    int number_flight = get_numberOfFlights();
    
    if (remain_fuel < 20)
    {
        remain_fuel = get_fuel();
        number_flight;
    } else 
    {
        remain_fuel;
        number_flight++;
    }
}
    
    //get set method
string Helicopter :: get_name()
{
    return name;
}
    
void Helicopter :: set_name(string name)
{
    this -> name = name;
}


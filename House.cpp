#include <iostream>
#include "Appliance.h"
#include "House.h"
using namespace std;

House :: House() : numAppliances(0), appliances(nullptr), current_num_app(0)
{}

House :: House(int numApp) : numAppliances(numApp), current_num_app(0)
{
    appliances = new Appliance*[numApp];
}

bool House :: addAppliance(Appliance* appliance)
{
    for (int i = 0; i < numAppliances; i++)
    {
        if (current_num_app < numAppliances)
        {
            appliances[current_num_app] = appliance; 
            current_num_app++;
            return true;
        }
    }
    return false;
}
double House :: getTotalPowerConsumption()
{
    double total_consume = 0.0;
    for (int j = 0; j < numAppliances; j++)
    {
        total_consume = total_consume + appliances[j]->getPowerConsumption();
    }
    return total_consume;
}

int House :: get_current()
{
    return current_num_app;
}

House :: ~House()
{
    delete[] appliances;
}
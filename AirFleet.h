#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirCraft.h"
class AirFleet 
{
private:
AirCraft **fleet;
AirCraft **get_fleet();
public: 
    AirFleet();                    
};
#endif
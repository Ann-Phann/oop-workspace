#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House {
private:
    int numAppliances;
    Appliance** appliances;
    int current_num_app;

public:
    House();
    House(int numApp);
   // ~House();
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
    int get_current();
    
};
#endif
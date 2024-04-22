#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
using namespace std;

int main (void)
{
    Fridge fridge1;
    fridge1.setVolume(10);
    fridge1.set_powerRating(5);
    double consume = fridge1.getPowerConsumption();

    cout << "Fridge 1 volume: " << fridge1.getVolume() << ". Power consumption is: " << fridge1.getPowerConsumption() << endl;

    Fridge fridge2(5, 10);
    cout << "Fridge 2 power: " << fridge2.get_powerRating() << ". Power consumption is: " <<fridge2.getPowerConsumption() << endl;
}
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main (void)
{
    int number_of_vehicle , num_of_car, num_of_bus, num_of_motor;
    
    cout << "num of cars: "; 
    cin >> num_of_car;

    cout << "num of buses: ";
    cin >> num_of_bus;

    cout << "num of motorbikes: ";
    cin >> num_of_motor;

    number_of_vehicle = num_of_car + num_of_bus + num_of_motor;

    

    
}
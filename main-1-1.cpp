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

    //create an array that have the general type and members are subclass
    Vehicle* vehicle[number_of_vehicle];
    int position = 0;

    for (int c = 1; c <= num_of_car; c++)
    {
        vehicle[position] = new Car(c);
        position++;
    }

    for (int b = 1; b <= num_of_bus; b++)
    {
        vehicle[position] = new Bus(b);
        position++;
    }

    for (int m = 1; m <= num_of_motor; m++)
    {
        vehicle[position] = new Motorbike(m);
        position++;
    }
    
    //print result
    for (int i = 0; i < number_of_vehicle; i++)
    {
        cout << i+1 << ": " << vehicle[i]->getParkingDuration() << endl;
    }

    for (int j = 0; j < number_of_vehicle; j++)
    {
        delete vehicle[j];
    }

    
}
/*Question 1, Part 2 - Aggregation
Design a class called ApartmentBuilding which represents an apartment building. An apartment building has a maximum 
capacity and a collection of units. Unit objects can be added to ApartmentBuilding as long as the maximum capacity has not been reached.

Your ApartmentBuilding class must provide the following public methods:

ApartmentBuilding();              // default constructor allocates capacity for 10 units
ApartmentBuilding(int capacity);  // constructor for ApartmentBuilding with given capacity
int get_Capacity();  // returns the maximum number of units allowed

// returns the current number of units in the apartment building
int get_Current_Number_of_Units(); 

// returns a dynamic array of the units in the apartment building
Unit * get_Contents();

// returns true and adds unit to the apartment if there is sufficient space
// otherwise returns false
bool add_Unit(Unit unit);

// destructor
~ApartmentBuilding();

You may add any other methods and any state variables you want, but the methods listed above must be available and public.

The Default apartment building capacity is 10.

Write an ApartmentBuilding.h and ApartmentBuilding.cpp files to declare and implement the ApartmentBuilding class.

Write a main-1-2.cpp file that tests all of your methods (behaviours) to make sure they are all working correctly.

Submit all 3 files.*/

#include "Unit.h"
#include "ApartmentBuilding.h"
#include <iostream>
using namespace std; 

ApartmentBuilding :: ApartmentBuilding()
{
    cap = 10;
    current_num = 0;
    content = nullptr;
}

ApartmentBuilding :: ApartmentBuilding(int capacity)
{
    cap = capacity;
    current_num = 0;
    content = new Unit[capacity];
}

int ApartmentBuilding :: get_Capacity()
{
    return cap;
}

int ApartmentBuilding :: get_Current_Number_of_Units()
{
    return current_num;
}

Unit* ApartmentBuilding :: get_Contents()
{
    return content;
}

bool ApartmentBuilding :: add_Unit(Unit unit)
{
    if (current_num < cap)
    {
        content[current_num] = unit;
        current_num++;
        return true;
    }
    return false;
}

ApartmentBuilding :: ~ApartmentBuilding()
{
    delete [] content;
}
/*Question 1, Part 1 - Basic Object
Design a class called Unit that represents a unit in an apartment. Units need to store state about their market value, 
number of bedrooms, and area. 

Unit must provide the following public behaviours (methods):

// a default constructor 
Unit();
// a constructor that takes: the value, number of bedrooms, and the size
Unit(int unit_val, int num_beds, double unit_size);   

int get_Num_Bedrooms();// returns the number of bedrooms for the unit
int get_Value(); // returns the value in dollars of the Unit
double get_Area(); // returns the number of square meters in the unit
You may add any other methods and any state variables you want, but the methods listed above must be available and public. 

The default constructor should set the Unit's number of bedrooms, area and value to zero. If the user gives a parameter in the 
constructor that is not valid (e.g. negative market value), set the value to zero.

Write a Unit.h and Unit.cpp files to declare and implement the Unit class.

Write a main-1-1.cpp file that tests all of your methods (behaviours) to make sure they are all working correctly.

Submit all 3 files.*/

#include <iostream>
#include "Unit.h"

Unit :: Unit()
{
    beds = 0;
    val = 0;
    area = 0;
}

Unit ::Unit(int unit_val, int num_beds, double unit_size)
{
    if (unit_val < 0 || num_beds <= 0)
    {
        beds = 0;
        val = 0;
        area = 0;
    }
    else {
        beds = num_beds;
        val = unit_val;
        area = unit_size;
    }
}

int Unit :: get_Num_Bedrooms()
{
    return beds;
}

int Unit :: get_Value()
{
    return val;
}

double Unit :: get_Area()
{
    return area;
}

#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"
using namespace std;

int main (void)
{
    ApartmentBuilding a1(2);
    Unit u1(3,2,1);
    Unit u2(2,1,1);
    Unit u3(4,3,2);
    //add unit
    if (a1.add_Unit(u1))
    {
        cout << "add unit 1 to apart" << endl;
    }
    else {
        cout << "cannot add unit 1 to apart" <<endl;
    }

    if (a1.add_Unit(u2))
    {
        cout << "add unit 2 to apart" << endl;
    }
    else {
        cout << "cannot add unit 2 to apart" <<endl;
    }

    if (a1.add_Unit(u3))
    {
        cout << "add unit 3 to apart" << endl;
    }
    else {
        cout << "cannot add unit 3 to apart" <<endl;
    }
    //number of current unit num
    cout << a1.get_Current_Number_of_Units() << endl;

    //get a list of unit
    Unit* list = a1.get_Contents();
    // print the details of each musician
    for (int i = 0; i < a1.get_Current_Number_of_Units(); i++) 
    {
    cout << "Unit " << i+1 << " has beds " << list[i].get_Num_Bedrooms() << ", has value: " << list[i].get_Value() << ", has area: " << list[i].get_Area() <<endl;
    }
}


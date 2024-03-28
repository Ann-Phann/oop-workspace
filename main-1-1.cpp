#include <iostream>
#include "Unit.h"
using namespace std;

int main (void)
{
    Unit u1;
    cout << "default: nums of beds: " << u1.get_Num_Bedrooms() << " " << ", default value: " << u1.get_Value() << " " << ", default area: " << u1.get_Area() << endl;

    Unit u2(3, 1, 150.5);
    cout << "u2 num of beds: " << u2.get_Num_Bedrooms() << " " << ", u2 value: " << u2.get_Value() << " "<< ", area: "<< u2.get_Area() << endl; 
}
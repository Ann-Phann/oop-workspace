#include <iostream>
#include "Person.h"

using namespace std;


Person* createPersonArray(int n)
{
    // Create an array of person struct
    Person* arr = new Person[n];

    //set value for array
    for ( int i = 0; i < n; i++)
    {
        arr[i].name = "John Doe";
        arr[i].age = 0;
    }
    return  arr;

}
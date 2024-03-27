/*Now, suppose you have another struct called PersonList that looks like this:

struct PersonList {
    Person* people;
    int numPeople;
};
Note: Add the above struct to the file Person.h 

In a file called function-1-2.cpp,  include Person.h and write a function called createPersonList that takes an integer argument n 
and returns a PersonList struct. The numPeople field of the struct should be set to n, and the people field should be set to an array 
of n Person structs. The name and age fields of each struct should be set to "Jane Doe" and 1, respectively.*/

#include <iostream>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n)
{
    PersonList list;
    list.numPeople = n;
    
    Person* array = new Person[n];
    for (int i = 0; i < n; i++)
    {
        array[i].name = "Jane Doe";
        array[i].age = 1;
    }
    list.people = array;

    for (int j = 0; j < n; j++)
    {
        cout << list.numPeople << " " << list.people->name << " " << list.people->age << endl;
    }

    return list;
    delete [] array;
}
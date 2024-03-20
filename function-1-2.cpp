#include <iostream>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n)
{
    struct PersonList pList;
    pList.numPeople = n;
    pList.people = new Person[n];

    for(int i = 0; i < n; i++)
    {
        pList.people[i].name = "Jane Doe";
        pList.people[i].age = 1;
    }

    return pList;
    
}
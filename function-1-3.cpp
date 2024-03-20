#include <iostream>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl)
{
    struct PersonList deepList;
    deepList.numPeople = pl.numPeople;
    deepList.people = new Person[pl.numPeople];

    for(int i = 0; i < deepList.numPeople; i++)
    {
        deepList.people[i].name = pl.people[i].name;
        deepList.people[i].age = pl.people[i].age;
    }

    return deepList;
}
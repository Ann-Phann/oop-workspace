/*in a file called function-1-3.cpp, include Person.h and write a function called deepCopyPersonList that takes a PersonList struct 
and returns a new PersonList struct that is a deep copy of the original. That is, the people field of the new struct should point to a 
new array of n Person structs, each with the same name and age fields as the original.*/
#include <iostream>
#include "Person.h"
using namespace std;

PersonList deepCopyPersonList(PersonList pl)
{
    PersonList deepcopy; 
    deepcopy.numPeople = pl.numPeople;
    deepcopy.people = new Person[pl.numPeople];

    for (int i = 0; i < pl.numPeople; i ++)
    {
        deepcopy.people[i].name = pl.people[i]. name;
        deepcopy.people[i].age = pl.people[i].age;
    }
    return deepcopy;
}
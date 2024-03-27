#include <iostream>
#include "Person.h"
using namespace std;

PersonList deepCopyPersonList(PersonList pl);

int main (void)
{
    PersonList pl;
    pl.numPeople = 2;

    pl.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; i++)
    {
    pl.people[i].name = "An";
    pl.people[i].age = 4;
    }
    PersonList deep = deepCopyPersonList(pl);

    for (int i = 0; i < deep.numPeople; i++)
    {
        cout << "num people: " << deep.numPeople << " " <<"name: " << deep.people[i].name << " " << "age: " << deep.people[i].age << endl;
    }
    delete [] deep.people;
    delete [] pl.people;
}
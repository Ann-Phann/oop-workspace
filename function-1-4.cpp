#include <iostream>
#include "Person.h"

using namespace std;

PersonList shallowCopyPersonList(PersonList pl)
{
    PersonList shallowList;
    shallowList.numPeople = pl.numPeople;
    shallowList.people = pl.people;

    return shallowList;
}
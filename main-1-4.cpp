#include <iostream>
#include "Person.h"

using namespace std;
PersonList shallowCopyPersonList(PersonList pl);

int main()
{
   PersonList pl;

   pl.numPeople = 1;
   pl.people = new Person[1];

   pl.people[0].name = "A0";
   pl.people[0].age = 0;

   

   PersonList copiedList = shallowCopyPersonList(pl);

   delete pl.people;

   return 0;
}
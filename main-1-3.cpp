#include <iostream>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl);

int main() 
{
   PersonList pl;

   pl.numPeople = 1;
   pl.people = new Person[1];

   pl.people[0].name = "A0";
   pl.people[0].age = 0;

   

   PersonList copiedList = deepCopyPersonList(pl);

   delete pl.people;
   delete copiedList.people;

   return 0;
}
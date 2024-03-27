#include <iostream>
#include "Person.h"
using namespace std; 

Person* createPersonArray(int n);

int main (void)
{
    Person* people = createPersonArray(2);
    for (int i = 0; i < 2; i++)
    {
        cout << people[i].name << " " << people[i].age << endl;
    }
    delete [] people;
}
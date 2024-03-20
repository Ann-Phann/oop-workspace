#include <iostream>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n);

int main() 
{
    int n = 5;
    PersonList p = createPersonList(n);
    cout << "Total people: " << p.numPeople << endl;
}

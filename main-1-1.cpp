#include <iostream>
#include "Person.h"

using namespace std;

Person* createPersonArray(int n);

int main()
{
    int number = 5;
    Person* p = createPersonArray(number);

    for (int i ; i < number; i++) 
    {
    cout << "Person " << i << ":" << " " << p[i].name << ", " << p[i].age << "." << endl;
    }

    delete[] p;

    return 0;
    
}
#include <iostream>
#include "Person.h"
using namespace std;

Person :: Person()
{
    name = "null";
}

Person :: Person(string name)
{
    this-> name = name;
}
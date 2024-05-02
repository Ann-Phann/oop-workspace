#include <iostream>
#include "Student.h"
using namespace std;

Student :: Student() : Person()
{
    id = 0;
}

Student :: Student(string s_name, int s_id) : Person(s_name)
{
    id = s_id;
}
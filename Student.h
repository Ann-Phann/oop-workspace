#include "Person.h"
#include <iostream>

class Student : public Person 
{
private:
    int id;

public:
    Student();
    Student(string s_name, int s_id);
};
#include "Grade.h"
#include <iostream>
using namespace std;

Grade :: Grade()
{
    student_id = 0;
    assignment = "null";
    value = 0;
}
Grade ::Grade(int id, string exercise, int grade)
{
    student_id = id;
    assignment = exercise;
    value = grade;
}
void Grade :: show_grade(int id)
{
    if (student_id == id)
    {
        cout << value;
    }
}
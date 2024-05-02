#include <Student.h>
#include <iostream>
using namespace std;

class Grade 
{
private: 
    int student_id;
    string assignment;
    int value;

public:
    Grade();
    Grade(int id, string exercise, int grade);
    void show_grade(int id);
};
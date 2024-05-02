#include "Grade.h"
#include <iostream>
using namespace std;

class Gradebook 
{
private:
    int student_id;
    int course_id;
    string assignment;
    Grade* score;
public:
    bool addGrade (int stud_id, int course_id, string assignment, int value);
};
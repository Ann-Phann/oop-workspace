/*Write a function that given a character 'A','B','C','D' or 'E' representing a grade, 
uses a switch statement print out if this is a pass or fail. Print "Nothing" if the character given is not a valid grade. 
For a pass print out "Pass", and a fail, "Fail". Note that the output needs to end with a newline. 
Grades 'A', 'B' and 'C' are a pass but 'D' and 'E' are a fail.*/

#include <iostream>
#include <cctype>
using namespace std;

void print_pass_fail(char grade);

int main (void)
{
    char grade;
    cout << "grade: ";
    cin >> grade;
    grade = toupper(grade);
    print_pass_fail(grade);
}

void print_pass_fail(char grade)
{
    switch (grade)
    {
    case 'A':
    case 'B':
    case 'C':
        cout << "Pass";
        break;
    
    case 'D':
    case 'E':
        cout << "Fail";
        break;

    default:
        cout << "Nothing";
        break;
    }
}
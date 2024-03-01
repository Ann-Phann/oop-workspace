#include <iostream>
#include <cctype>
using namespace std; 

void print_pass_fail(char grade);

int main (void)
{
    char grade;
    cout << "your grade: ";
    cin >> (grade);
    grade = toupper(grade);
    print_pass_fail(grade);
}
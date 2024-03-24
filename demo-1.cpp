#include <iostream>
using namespace std;

// structered data
struct Student{
    string name;
    int ID;
    double grade;
};

void print_student(Student a)
{
    cout << a.name << "|" << a.ID << "|" << a.grade <<endl;

}

void print_student_ptr (Student* p)
{
    cout <<"pointer:" << p -> name << "|" << p->ID << "|" << p -> grade <<endl;
}

int main(void)
{
    Student s1;
    Student* ps;

    s1.name = "An";
    s1.ID = 1874923;
    s1.grade = 85.55;

    ps = &s1;

    print_student(*ps); 

    print_student_ptr(&s1);

    print_student(s1);


}
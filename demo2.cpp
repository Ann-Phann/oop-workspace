#include <iostream>
using namespace std;

struct Student
{
    string name;
    int ID;
    double grade; 
    void print()
    {
        cout << name << "|" << ID << "|" << grade << endl;
    }

    Student operator+(Student a)
    {
        Student res;
        res.name = name;
        res.grade = grade + a.grade;
        res.ID = 0;
        return res;
    }
};

int main (void)
{
    Student s1, s2, s3;
    s1.name = "Ammmmn";
    s1.ID = 123;
    s1.grade = 10;

    s2.name = "Anh";
    s2.ID = 345;
    s2.grade = 20.5;
    s1 = s1 + s2;

    s1.print();
}
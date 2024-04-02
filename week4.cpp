//topic 4-2: Pointers to, and arrays  of objects
#include <iostream>
using namespace std;

class Student 
{
private:
    string name;
    int ID;
    double grade;

public:
    Student();
    Student(string myname, int myid, double mygrade);
    string get_name();
    int get_id();
    double get_grade();
    void set_name(string new_name);
    void set_id(int newid);
    void set_grade(double grade);
};

Student :: Student()
{
    name = "none";
    ID = 0;
    grade = 0.0;
}

Student :: Student(string myname, int myid, double mygrade)
{
    name = myname;
    ID = myid;
    grade = mygrade;
}

string Student :: get_name()
{
    return name;
}

int Student :: get_id()
{
    return ID;
}

double Student :: get_grade()
{
    return grade;
}

void Student :: set_name(string new_name)
{
    name = new_name;
}

void Student :: set_id(int newid)
{
    ID = newid;
}

void Student :: set_grade(double newgrade)
{
    grade = newgrade;
}

Student* foo (Student* p)
    {
        Student* k = new Student();
        k->set_name("adam");
        k->set_id(p->get_id() +1);
        cout << k->get_name()<< " " << k->get_id() <<endl;
        return k;
    }

int main (void)
{
    Student s1("an", 123, 6.2);

    //define a pointer that contain the address of object
    Student *p = &s1;
    cout << p->get_name() << endl;

    //allocate memory space for an object and store its address in a pointer
    p = new Student("anh", 234, 6.0);
    cout << p->get_name() << endl;
    
    //pass an address to an object to a function using a pointer

    foo(p);

    delete p;
    
}
//Week4-2: Array ob objects

#include <iostream>

class B {
private:
    int* _id;

public:
    B(int id) {*_id = id;}

    B() : B(0) {}

    int get_id() {return *_id;}

    void set_id(int id) {*_id = id;}

    ~B() {delete _id;}
};

class A {
private:
    B b;

public:
    A() {std::cout << this->b.get_id() << std::endl;}
    ~A(){}
};

int main(void)
{
    A a;
}

//segmentation fault
/*
because _id in B class is not initialized 
When you try to dereference _id and assign it a value (*_id = id), you are accessing 
memory that _id points to, which is not a valid memory location since _id has not been 
initialized to point to any valid memory.

Solution:
    B(int id) { 
        _id = new int;
        *_id = id;}
*/
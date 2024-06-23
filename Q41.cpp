#include <iostream>

class A {
public:
    A() {std::cout << " in A";}
};

class B : public A {
public:
    B() {std::cout << " in B";}
};

int main (void)
{
    A* a = new A;
    A* container = new B;
    //we can put a child class object in a parent class pointer
    //the constructor of the parent class will be called first then the child class
}
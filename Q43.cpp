#include <iostream>

class A {
public:
    A() {std::cout << " in A" << std::endl;}
    void print() {std::cout << "A" << std::endl;}
};

class B {
public:
    B() {std::cout << " in B" << std::endl;}
    void print() {std::cout << "B" << std::endl;}
};

class C : public A, public B {
public:
    C() {std::cout << " in C" << std::endl;}
    void print() {std::cout << "C" << std::endl;}
};

int main (void)
{
    C d;
    d.print();
}
//When you create an instance of a derived class, the constructors of its base classes are called automatically before the constructor of the derived class. This ensures that all parts of the object are properly initialized
//in A
//in B
//in C
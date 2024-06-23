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
    B* b = new A;
    //cannot do this because a parent class object cannot be put in a child class pointer        
}
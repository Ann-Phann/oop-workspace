#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor" << std::endl;
    }
    virtual void doSomething() = 0;
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor" << std::endl;
    }

    void doSomething() {
        std::cout << "Derived doSomething" << std::endl;
    }
};

int main (void)
{
    Base* b = new Derived();
    delete b;
}
//when call --> base class call first then derived class
//when delete --> derived class call first then base class
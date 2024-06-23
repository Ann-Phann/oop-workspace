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
};

int main (void)
{
    Base* b = new Derived();
    delete b;
    return 0;
}
/*The code provided has an issue because the Derived class does not implement the pure virtual function 
doSomething that is declared in the Base class.*/
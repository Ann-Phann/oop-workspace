#include <iostream>

class Base {
public:
    ~Base() {
        std::cout << "Base desstructor" << std::endl;
    }

    virtual void doSomething() = 0;
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
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
//output: base destructor
/*The destructor isn’t virtual so it’s only executing the pointer 
type function and resulting in an incomplete memory deallocation*/
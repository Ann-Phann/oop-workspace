#include <iostream>

class A {
public:
    virtual void fun() {std::cout << "A fun ";}
    virtual void dosth() = 0;
};

class B : public A {
public:
    void fun() {std::cout << "B fun ";}
    void dosth() {std::cout << "B dosth ";}

};

class C : public B{
public:
    void fun(){std::cout << "C fun ";}
    void dosth() {std::cout << "C dosth ";}
};

int main(void)
{
    A* a = new A;
    a->fun();
    delete a;
}
//Since A has been declared as an abstract class with a pure virtual function, we cannot instantiate it as an object.
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
    A* a = new C;
    a->fun();
    delete a;
}
//output: c fun
//As the pure virtual function has been overridden in the C class there is no issue compiling it.
#include <iostream>

class A {
public:
    virtual void fun() {std::cout << "A fun ";}
};

class B : public A {
public:
    void fun() {std::cout << "B fun ";}

};

class C : public B{
public:
    void fun(){std::cout << "C fun ";}
};

int main(void)
{
    A* a = new C;
    a->fun();
    delete a;
}
//output: c fun
//A virtual function is initialized so the function used is the object’s.
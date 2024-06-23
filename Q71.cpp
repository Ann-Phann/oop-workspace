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
    C c;
    B* b = &c;
    b->fun();
}
//output: C fun
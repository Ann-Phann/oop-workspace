//multiple inheritance

#include <iostream>

class A {
protected:
    int x;

public:
    A() {x = 10;}
};

class B : public A {
protected:
    int y;

public:
    B() {y = 20;}
};

class C : public B {
protected:
    int z;

public:
    C() {z = 1;}
    double get_result() {return x*z;}
};

int main(void)
{
    C c;
    std::cout << c.get_result() << std::endl;
}
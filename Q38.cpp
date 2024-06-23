#include <iostream>

class A {
protected:
    int _a;

public:
    A(int a) :_a(a){}
    A():A(100) {}
    void say_hi() {std::cout << "Hi i'm A" << std::endl;}
};

class B:public A{
private:
    double _r;

public:
    B():_r(0.5){}
    void say_hi() {std::cout << "Hi i'm B" << std::endl;}
};

int main(void)
{
    B b;
    b.say_hi();
    b.A::say_hi();
}
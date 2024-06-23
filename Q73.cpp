#include <iostream>

class A {
public:
    virtual int fun() = 0;
};

class B : public A {
public:
    int fun() {
        std::cout << "B fun ";
        return 1;
    }
};

class C : public B{
public:
    int fun(){
        std::cout << "C fun ";
        return 2;}
};

int main(void)
{
    A a;
    B* b = &a;
    b->fun();
}
/*Output:
Error
A is an abstract class so we cannot instantiate it*/
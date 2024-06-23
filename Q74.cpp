#include <iostream>

class A {
public:
    virtual int fun() {
        std::cout << "A fun ";
        return 0;
    };
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
//This is not allowed because A is not derived from B. Instead, B is derived from A.
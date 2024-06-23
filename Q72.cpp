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
    C c;
    B* b = &c;
    b->fun();
}
/*Output:
C::fun() called
A is an abstract class and the virtual function has been overridden in the sub classes so it will
compile and use the content of the pointer which is address of class C*/
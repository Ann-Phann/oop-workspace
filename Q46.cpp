#include <iostream>     

class A{
protected:
    int _x;

public:
    A() :_x (100){}

    void foo() {
        std::cout << this->_x << std::endl;
    }
};

class B : public A {
private:
    int _y;

public:
    B():_y(200){}

    void foo () {
        std::cout << this->_x << " " << this->_y << std::endl;
    }
};

void test(A a){
    a.foo();
}

int main(){
    B b;
    test(b);
    return 0;
}
/*The code provided does not demonstrate polymorphism. Polymorphism in C++ involves the use of virtual functions to allow 
derived class methods to be called through base class pointers or references.

In your code, test(A a) takes an object of type A by value, which means slicing occurs when you pass an object of type B 
to it. Slicing means that only the A part of the B object is copied, and any B-specific information is lost. Therefore, 
the foo method of A is called, not the overridden foo method of B.*/
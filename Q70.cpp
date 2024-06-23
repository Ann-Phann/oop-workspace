#include <iostream>

class A {
public:
    void fun() {std::cout << "A fun ";}
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
/*Output: B::fun called
Since there are no virtual functions, the compiler uses the pointer type’s function which is B.
In this case the initialization of the object is the same as using the new() operator

In the provided code, you are creating an object of type C and then using a pointer of type B to 
call the fun method. Because fun is not declared as virtual in the base class A, the method call 
will be resolved statically (i.e., at compile time), not dynamically (i.e., at runtime). This means 
that the method defined in the type of the pointer (B) will be called, rather than the method 
defined in the actual object type (C).*/
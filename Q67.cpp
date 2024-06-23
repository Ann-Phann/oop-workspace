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
    A* a = new A;
    a->fun();
    delete a;
}
//output: a fun
//The constructor is using the function from the object which in this case is A. A is not an abstract class so this is allowed.
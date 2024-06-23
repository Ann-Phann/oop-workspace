//week 7-2: Abstract class
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
    A* a = new C;
    a->fun();
    delete a;
}
//output: a fun
//No virtual functions so the function called is from the pointer type (static binding/compile time binding)
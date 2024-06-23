#include <iostream>

class A {
public:
    virtual void foo() {std::cout <<"A\n";}
};

class B:public A{
public:
    void foo() {std::cout <<"B\n";}
};

class C: public B {
public:
    void foo() {std::cout <<"C\n";}
};

void test(A* a)
{
    a->foo();
}

int main()
{
    C c;
    test(&c);
    return 0;
}
/*output:
C
with virtual function, based on the pointer, the function used the content of pointer*/
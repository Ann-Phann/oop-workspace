#include <iostream>

class A {
public:
    void foo() {std::cout <<"A\n";}
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
/*Output:
A
No virtual function has been defined so it will resort to what is put in the parameters when the
function is initialized.*/
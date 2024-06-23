#include <iostream>

class A {
protected:
    int _a;

public:
    A(int a) :_a(a){}
    A():A(100) {}
    int get_a() const {return _a;}
};

class B:public A{
private:
    double _r;

public:
    double foo() {return _a*_r;}
    //B():B(1){} --> output = 100
};

int main(void)
{
    B b;
    std::cout << b.foo() << std::endl;
}

/*undefined behavior because we didn't initialize _r*/
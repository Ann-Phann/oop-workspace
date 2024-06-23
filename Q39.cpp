//multiple inheritance

#include <iostream>

class A {
protected:
    int x;

public:
    A() {x = 10;}
};

class B : public A {
protected:
    int y;

public:
    B() {y = 20;}
};

class C : public A, public B {
protected:
    int z;

public:
    C() {z = 1;}
    double get_result() {return x*z;}
};

int main(void)
{
    C c;
    std::cout << c.get_result() << std::endl;
}
/*- This will generate an error
- This is because the x in inherited to both the classes B and C → meaning in the
get_result() function, there will be ambiguity with x * z;
- It will not know which x is being multiplied

The code as written will result in an error due to ambiguous inheritance. The class C inherits
from both A and B. However, B also inherits from A. This leads to C having two base A objects, 
causing ambiguity when accessing members of A.*/
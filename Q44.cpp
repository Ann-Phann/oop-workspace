#include <iostream>

class A {
private:
    int x, y;

public:
    A(int _x = 0, int _y = 0) : x(_x), y(_y) {}
};

class B : public A {
public:
    void show() {std:: cout << " x = " << x <<  "y = " << y;}
};

int main(void)
{
    B b;
    b.show();
}
//this cannot be done because x and y in class A is private, we can't access it in sub class
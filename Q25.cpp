#include <iostream>

class A {
    int x;
};

int main (void)
{
    A a;
    std::cout << a.x << std::endl;
}

//cannot access the data mamber because it is private by default if not specified
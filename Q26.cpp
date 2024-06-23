#include <iostream>

class A{
private:
    int _x;

public:
    A(int x) {
        _x = x;
    }
};

int main(void)
{
    A a(5);
    std::cout << a._x << std::endl;
}

//cannot access the data member because it is private 
//to access the data we need getter method
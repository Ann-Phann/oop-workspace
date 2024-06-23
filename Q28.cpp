#include <iostream>

class A{
private:
    int _x;

public: 
    A(int x) : _x(x) {}

    A() : A(0) {}

    int get_x() {
        return _x;
    }
};

int main(void)
{
    A a;
    std::cout << a.get_x() << std::endl;

    A b(10);
    std::cout << b.get_x() << std::endl;
}
//output a will be 0 because default construct is called and it sets the value to 0
//output b will be 10 because parameterized constructor is called and it sets the value to 10
#include <iostream>

class A{
private:
    int _x;

public:
    A(int x) {
        _x = x;
    }

    int get_x() {
        return _x;
    }
};

int main(void)
{
    A a;
    std::cout << a.get_x() << std::endl;
}

//error because constructor is defined with parameter
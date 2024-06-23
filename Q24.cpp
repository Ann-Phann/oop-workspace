//classes and objects

#include <iostream>

class A{
    int x;
};

int main(void)
{
    A.x = 10;
    std::cout << A.x << std::endl;
}

//this would not work becasue we need to create an object to access the member variable x


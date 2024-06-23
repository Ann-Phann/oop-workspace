#include <iostream>

int* addOnetoX(int x)
{
    x = x + 1;
    return &x;
}

int main ()
{
    int x = 100;
    int* p = addOnetoX(x);
    std::cout << *p << std::endl;
    return 0;
}
//result is: undefined

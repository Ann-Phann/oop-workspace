#include <iostream>
int* addOnetoX(int x)
{
    int res = x + 1;
    int* h = new int;
    *h = res;
    return h;
}

int main(void)
{
    int x = 100;
    int* p = addOnetoX(x);
    std::cout << *p << std::endl;
    delete p;
}

//h will be stored on the stack, but the memory h point to is on the heap
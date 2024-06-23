#include <iostream>

void addOnetoX (int* p)
{
    *p = *p + 1;
}

int main(void)
{
    int x = 100;
    
    addOnetoX(&x);
    std:: cout << x << std::endl;
}
//result = 101
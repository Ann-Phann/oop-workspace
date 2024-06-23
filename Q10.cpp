#include <iostream>

int main()
{
    int x =100;

    int* p = &x;
    int **q = &p;

    std::cout<< **q << std::endl;
    return 0;
}
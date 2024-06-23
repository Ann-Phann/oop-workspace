#include <iostream>
int main()
{
    int* ptrInt;
    std::cout << "Size of ptrInt: " << sizeof(ptrInt) << std::endl;

    char* ptrChar;
    std::cout << "Size of ptrChar: " << sizeof(ptrChar) << std::endl;

    double* ptrDouble;
    std::cout << "Size of ptrDouble: " << sizeof(ptrDouble) << std::endl;
    return 0;
}
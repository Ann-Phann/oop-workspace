#include <iostream>

struct MyStruct
{
    int f; // size = 4
    int t; // size = 4
    double d; // size = 8
    
};

int main (void)
{
    std::cout << "Size of MyStruct: " << sizeof(MyStruct) << std::endl;
}

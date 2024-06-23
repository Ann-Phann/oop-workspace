#include <iostream>

int main ()
{
    int x = 100;
    int y = 100;
    int z = 100;

    int* p = &x;
    int* q = &y;
    int* r = &z;

    std::cout << p-q << std::endl;
    std::cout << p << std::endl;
    std::cout << p-r << std::endl;
    std::cout << r-p << std::endl;


    return 0;
}

//what will be the value of p-q?
/*
- The answer is 1
- You can subtract pointers from pointers because they are just variables that hold
addresses
- The compiler will tell you how many integers are between the two pointers*/
//where are h and x are stored
#include <iostream>

int main ()
{
    int* h = new int(2);
    int x = 0;

    std::cout << "Address of h: " << &h << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << h << std::endl;
    std::cout << *h << std::endl;
}

//both x and h are stored in the stack
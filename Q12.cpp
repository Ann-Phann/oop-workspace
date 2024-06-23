#include <iostream>

int main()
{
    int a[] = {1, 2, 3};
    int b[3];
    b = a;

    for (int i = 0; i < 3; i++)
    {
        std::cout << a[i] << " ";

    }
    std::cout << std::endl;
    return 0;
}
//can't copy an array like that since it's not deep/shalow copy but instead it just try to reassign the array
#include <iostream>

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i <2; i++)
    {
        std::cout << *(a[i]) << std::endl;
    }
    return 0;
}
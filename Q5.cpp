#include <iostream>

struct Example {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
};


//pas-by-value parameter
void printStruct (Example inputStruct)
{
    for (int i = 0; i < 10; ++i)
    {
        std:: cout << inputStruct.arr[i] << " ";
    }
}

int main(void)
{
    Example s;
    printStruct(s);
}


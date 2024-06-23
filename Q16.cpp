#include <iostream>

int main(void)
{
    int rows = 2, cols =5;

    int* *a = new int*[rows];

    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}

//same with Q15.cpp
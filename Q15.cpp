#include <iostream>

int main()
{
    int rows = 2, cols = 2;
    int* *a = new int*[rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

//undefined behavior because after the allocation of line 6, there is nothing in columns
//--> a[i][j] try to access unallocated memory for columns

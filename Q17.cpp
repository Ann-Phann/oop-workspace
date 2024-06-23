#include <iostream>

void create_2dArray (int** a, int rows, int cols)
{
    a = new int*[rows]; // a is array of pointers
    for (int i = 0; i < rows; i++)
    {
        a[i] = new int[cols]; //create each row with number of columns
    }
}

int main(void)
{
    int** p;
    create_2dArray(p, 5, 2);
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << p[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for(int k = 0; k < 5; k++)
    {
        delete[] p[k];
    }
    delete[] p;
}

//segmentation fault
/*because of the way the pointer a is being handled in the function create_2dArray. 
Specifically, the changes to a inside create_2dArray do not affect the pointer p in 
the main function. This is because a is a local parameter in create_2dArray, and any 
modifications to it do not affect the original pointer p in main.*/
/*Given a matrix of integers with 10 rows and 10 columns, write a function and program to determine if 
the matrix is an identity matrix or not. Return a 1 if it is an identity matrix and a 0 if not. 
(Definition: An identity matrix is one with 1's down the main diagonal and 0's elsewhere)*/

#include <iostream>
using namespace std;

int is_identity(int array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i != j) && (array[i][j] != 0))
            {
                return 0;
            }
            if (i == j && array[i][j] != 1)
            {
                return 0;
            }
        }
    }
    return 1;
}
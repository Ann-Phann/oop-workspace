/*Given two two-dimensional arrays, add them together and print the result as in 1-4 above.
What relationship needs to be between the sizes of the two matrices?*/

#include <iostream>
using namespace std;

void print_summed(int array1[3][3],int array2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array1[i][j] + array2[i][j] << " ";
        }
        cout << endl;
    }
}
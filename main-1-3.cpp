#include <iostream>
using namespace std;

double* duplicateArray(double* array, int size);

int main (void)
{
    double array[] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    double*dup = duplicateArray(array, n);
    for (int i = 0; i< n; i++)
    {
        cout << dup[i] << " ";
    }
    delete [] dup;
}
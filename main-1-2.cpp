#include <iostream>
using namespace std;

double* modifyArray(double* array, int size, double value);

int main (void)
{
    double array[] = {1,2,3,4,5};
    double num = 1; 
    int n = sizeof(array)/sizeof(array[0]);
    double* result = modifyArray(array, n, num);

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    delete [] result;
}

#include <iostream>
using namespace std;

double arrayMin(double* array, int size);

int main (void)
{
    double array[] = {1,2,3,0,5,-1};
    int n = sizeof(array)/sizeof(array[0]);
    cout << arrayMin(array, n);
}
#include <iostream>
using namespace std;

void modifyArray(double* array, int size, double value);

int main (void)
{
    double array[] = {1,2,3,4,5};
    double num = 1; 
    int n = sizeof(array)/sizeof(array[0]);
    modifyArray(array, n, num);

}




#include <iostream>
using namespace std; 

double sum_even(double array[], int n);

int main(void) 
{
    double array[] = {3,5,2,1,4,6,7};
    int length = sizeof(array) / sizeof(array[0]);
    cout << sum_even(array, length) << "\n";
}
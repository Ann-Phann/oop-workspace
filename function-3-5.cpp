/*Write a function that returns the sum of the elements in the even positions in an array. 
The function must return 0 if the size parameter, n, is less than 1. Note, 0 is considered an even position.*/

#include <iostream>
using namespace std;

double sum_even(double array[], int n);

int main (void)
{
    double array[] = {1,2,3,4,5,6};
    int n = sizeof(array)/sizeof(array[0]);
    cout << sum_even(array, n); 
}

double sum_even(double array[], int n)
{
    if (n<1)
    {
        return (double)1;
    }

    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + array[i];
        }
    }
    return (double) sum;
}
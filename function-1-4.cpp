/* Write a function that returns the sum of two arrays as an integer (of equal size). The function should take 
as parameters an array, another array and their size. Hence the result is sum of array 1 + sum of array 2. 
The function should return 0 if the size parameter, n, is less than 1. Try to do this in one for loop.*/

#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n);

int main (void)
{
    int array1[] = {1,2,3,4};
    int array2[] = {9,8,7,6};
    int n = sizeof(array1)/sizeof(array1[0]);
    cout << sum_two_arrays(array1, array2, n);
}

int sum_two_arrays(int array[], int secondarray[], int n)
{
    if (n < 1)
    {
        return 0;
    }
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += array[i] + secondarray[i];
    }
    return sum;
}
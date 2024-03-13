/*Write a function that returns the average of all elements in an integer array. 
The function takes as parameters the array and the number of elements in the array. 
Your function should return 0.0 if the size parameter, n, is less than 1.*/

#include <iostream>
using namespace std;

double array_mean(int array[], int n);

int main (void)
{
    int array[] = {1, 2, 3, 4};
    int n = sizeof(array)/ sizeof(array[0]);
    cout << array_mean(array,n);
}

double array_mean(int array[], int n)
{
    if (n < 1)
    {
        return 0.0;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return (double)sum/n;
}
//Write a function that returns the sum of all elements in an int array. The parameters of the function are 
//the array and the number of elements in the array. The function should return 0 if the size parameter, n, is less than 1.

#include <iostream>
using namespace std;

int array_sum(int array[], int n)
{
    int sum = 0;
    if (n < 1)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main (void)
{
    int array[] = {3, 4, 5};
    int n = sizeof(array)/ sizeof(array[0]);
    cout << array_sum(array, n);
}
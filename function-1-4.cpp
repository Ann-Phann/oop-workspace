#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n)
{
    int sum = 0;
    if (n < 1)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        sum += array[i] + secondarray[i];
    }
    return sum;
}
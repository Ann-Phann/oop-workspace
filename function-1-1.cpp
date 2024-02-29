#include <iostream>
using namespace std;


int array_sum (int array[], int n)
{
    int total_sum = 0;
    if (n < 1) 
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        total_sum += array[i]; 
    }
    return total_sum;
}
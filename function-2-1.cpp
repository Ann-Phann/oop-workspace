#include <iostream>
using namespace std;

int min_element(int array[], int n)
{
    // int min = 0; 
    int min = array[0];

    if (n < 1)
    {
        return 0;
    }

    //if int min = 0 --> in for loop: int i = 0
    for (int i = 1; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

#include <iostream>
using namespace std;

int max_element(int array[], int n)
{
    if (n < 1)
    {
        return 0;
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}
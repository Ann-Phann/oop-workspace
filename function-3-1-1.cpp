#include <iostream>
using namespace std;



bool is_fanarray(int array[], int n)
{
    if (n < 1)
    {
        return false;
    }

    int peak = std::round(n / 2);
    bool left = true;
    bool right = true;

    // Left side
    for (int i = 0; i < peak - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            left = false;
            break;
        }
    }

    // Right side
    for (int j = peak; j < n - 1; j++)
    {
        if (array[j] < array[j+1])
        {
            right = false;
            break;
        }
    }

    return (left && right);
}
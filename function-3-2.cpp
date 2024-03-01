#include <iostream>
#include <algorithm>
using namespace std;

int median_array(int array[], int n)
{
    if ((n < 1) && (n % 2 ==0))
    {
        return false;
    }

    sort (array, array + n);
    int median = array[n/2];
    
    return median;
}
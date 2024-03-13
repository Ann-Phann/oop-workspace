/*Write a function that returns the maximum element in an integer array. 
The function should return 0 if the size parameter, n, is less than 1.*/

#include <iostream>
using namespace std;

int max_element(int array[], int n);

int main (void)
{
    int array[] = {0,2,5,1,-4};
    int n = sizeof(array)/ sizeof(array[0]);
    cout << max_element(array, n);
}

int max_element(int array[], int n)
{
    if (n < 1)
    {
        return 0;
    }

    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}
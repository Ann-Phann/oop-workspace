/*Write a function that given an array of integers and its length, will find the minimum (smallest) number and return it. 
The function should return 0 if the size parameter, n, is less than 1.*/

#include <iostream>
using namespace std;

int min_element(int array[], int n);

int main (void)
{
    int array[] = {0,2,5,1,-4};
    int n = sizeof(array)/ sizeof(array[0]);
    cout << min_element(array,n);
}

int min_element(int array[], int n)
{
    if (n < 1)
    {
        return 0;
    }
    int min = array[0];
    for (int i = 1; i < n; i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}
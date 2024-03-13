/*Write a function that given an array of integers and its length, will determine if the elements are in ascending order or not, 
that is, each element is greater than or equal to the previous element. The function must return true if in the size parameter is 
greater than 0 and the elements are in ascending order, otherwise it must return false.*/

#include <iostream>
using namespace std;

bool is_ascending(int array[], int n);

int main (void)
{
    int array[] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    if (is_ascending(array, n))
    {
        cout << "true";
    } else 
    {
        cout << "false";
    }
}

bool is_ascending(int array[], int n)
{
    if (n < 1)
    {
        return false;
    }

    for (int i = 0; i < n-1; i++)
    {
        if (array[i] > array[i+1])
        {
            return false;
        }
    }
    return true;
}
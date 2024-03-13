/*Write a function that given an array of integers, and its length, determine if the array is a 'fan' array, 
i.e. the entire array is a palindrome with the numbers in ascending order from the start to the middle element.
e.g. {1,2,3,2,1} and {2,4,4,2} are both fan arrays but, {1,2,1,2,1} and {1,3,5,4,2} are not. The function must return false 
if the size parameter, n, is less than 1.*/

#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n);

int main (void)
{
    int array[] = {1,2,3,3,2,1};
    int n = sizeof(array)/sizeof(array[0]);
    bool result = is_fanarray(array,n);
    cout << boolalpha << result;
}

bool is_fanarray(int array[], int n)
{
    if (n < 1)
    {
        return false;
    }

    if (n % 2 != 0)
    {
        for (int i = 0; i < n/2; i++)
        {
            if ((array[i] > array[i+1]) || array[i] != array[n-i-1])
            {
                return false;
            }
        }
    }
    
    if (n % 2 == 0)
    {
        for (int i = 0; i < n/2 -1; i++)
        {
            if ((array[i] > array[i+1]) || array[i] != array[n-i-1])
            {
                return false;
            }
        }
    }
    return true;
}
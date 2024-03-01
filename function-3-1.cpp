#include <iostream>
#include <cmath>
using namespace std;

// Write a function that given an array of integers, and its length, determine if the array is a 'fan' array, i.e. the entire array is a palindrome with the numbers in ascending order from the start to the middle element. e.g. {1,2,3,2,1} and {2,4,4,2} are both fan arrays but, {1,2,1,2,1} and {1,3,5,4,2} are not. The function must return false if the size parameter, n, is less than 1.

    /*divide two cases: when length n is even and when n is odd.
      n is odd: --> know the peak: round up --> if ascending in the first half --> copy to the last part  
        1 2 3 2 1
        i = 0 --> i<2
        n/2 --> 5/2 = 2 (location third)

        1 2 3 4 3 2 1  --> 7/2 = 3 
        1 2 3 1 3 2 1 
      
      n is even:  
        1 2 4 4 2 1 --> 6/2 = 3
        2 4 6 8 8 6 4 2 --> 8/2 = 4 --> n-1-i = 8-1-3
               */
              
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
            if ((array[i] > array[i+1]) || (array[i] != array[n-1-i]))
            {
                return false;
            }
        }
    }

    if (n % 2 == 0)
    {
        for (int i = 0; i < n/2 -1; i++)
        {
            if ((array[i] > array[i+1]) || (array[i] != array[n-1-i]))
            {
                return false;
            }
        }
    }
    return true;
}
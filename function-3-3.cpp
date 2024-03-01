/*Write a function that given an array and its length, returns the weighted average of the array, 
defined as Σ xi * wi / n, where xi represents all the distinct elements in the array, 
wi represents how many times the value of element xi appears in the array, and n is the size of the array. 
eg. if  the array is {1,2,1,4,1,3} 
the weighted average is (1 * 3 / 6) + (2 * 1 / 6) + (1 * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0. 
The function must return 0 if the size parameter, n, is less than 1.*/

#include <iostream>
#include <algorithm>
using namespace std;

double weighted_average(int array[], int n)
{
    if (n < 1) 
    {
        return 0;
    }
    // element that appear --> how many times appeared --> function math
    
    //if it's different to the existing one --> update new one
   
    // sort the array
    std::sort(array, array + n);

    double sum = 0.0;
    int count = 1;

    for ( int i = 1; i < n; i++)
    {
        if(array[i] != array[i - 1]) 
        {
            sum += array[i - 1] * count;
            count = 1;
        } else 
        {
            ++count;
        }
    }

    sum += array[n - 1] * count;

    double avg = sum / n;

    return avg;
}
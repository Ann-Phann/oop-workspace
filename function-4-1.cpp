/*Write a function, secondSmallestSum that when passed an int array of any length greater than 1 will calculate the sum of 
the elements of every possible sub-array and then return the second smallest sum found. It is possible for the smallest and 
second smallest sums to have the same value.
Sub-arrays are contiguous ranges of elements within an array. For example, if you have an array of length 4, {1,2,3,4}, 
then the complete set of sub-arrays is:

{1}, {1,2}, {1,2,3}, {1,2,3,4}, {2}, {2,3}, {2,3,4}, {3}, {3,4}, {4}
the sum of each sub-array is then:

1, 3, 6, 10, 2, 5, 9, 3, 7, 4
You should start by copying the function-1-1.cpp file and name it function-4-1.cpp. Then add the function secondSmallestSum to the new file.

The main function for this problem must call your readNumbers function, then pass the new array to your secondSmallestSum function, 
display the second smallest sum found and finally delete the array. The main function in the file main-4-1.cpp.*/

#include <iostream>
#include <algorithm>
using namespace std;

int *readNumbers()
{
    int* array = new int[10]; 
    for (int i = 0; i < 3; i++)
    {
        cin >> array[i];
    }

    return array;
} 

// {1}, {1,2}, {1,2,3}, {1,2,3,4}, {2}, {2,3}, {2,3,4}, {3}, {3,4}, {4}

int secondSmallestSum(int *numbers,int length)
{
    //With a limited numbers
    int* sum_array = new int [32];
    int sec_smallest = 0; 
    
    //m continues to grow forever --> put it out for loop so not reset
    int m = 0;

    //Find sum sub-arrays
    for (int i = 0; i < length; i++)
    {
        int sum = 0;
        for (int j = i; j < length; j++)
        {
            sum += numbers[j];
            sum_array[m] = sum;
            m++;
        }
    }

    for (int k = 0; k < m; k++)
    {
        cout << sum_array[k] << " ";
    }
    cout << endl;

    //Find second smallest sum
    sort(sum_array, sum_array + m);

    sec_smallest = sum_array[1];

    //after finishing using sum_array --> delete
    delete[] sum_array;
    return sec_smallest;
}

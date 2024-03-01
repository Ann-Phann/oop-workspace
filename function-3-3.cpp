/*Write a function that given an array and its length, returns the weighted average of the array, 
defined as Σ xi * wi / n, where xi represents all the distinct elements in the array, 
wi represents how many times the value of element xi appears in the array, and n is the size of the array. 
eg. if  the array is {1,2,1,4,1,3} 
the weighted average is (1 * 3 / 6) + (2 * 1 / 6) + (1 * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0. 
The function must return 0 if the size parameter, n, is less than 1.*/

#include <iostream>
#include <set>
#include <vector>
using namespace std;

double weighted_average(int array[], int n)
{
    if (n < 1) 
    {
        return 0;
    }
    // element that appear --> how many times appeared --> function math
    
    //if it's different to the existing one --> update new one
   
    std::set <int> unique_num; // using library set that auto show unique num
    
    for (int i = 0; i < n; i++)
    {
        unique_num.insert(array[i]); 
    }

    // declare and add unique number to new array 
    std::vector<int> unique_array (unique_num.begin(), unique_num.end());  
    size_t unique_size = unique_array.size();
    double sum = 0;

    for (size_t i = 0; i < unique_size; i++)
    {
        int count = 0;
        for ( int j = 0; j < n; j++)
        {
            if( array[j] == unique_array[i])
            {
                count++;
            }
        }
        sum += unique_array[i] * count ;
    }

    return sum /static_cast<double>(n);
}
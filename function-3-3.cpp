/*Write a function that given an array and its length, returns the weighted average of the array, 
defined as Σ xi * wi / n, where xi represents all the distinct elements in the array, 
wi represents how many times the value of element xi appears in the array, and n is the size of the array. 
eg. if  the array is {1,2,1,4,1,3} 
the weighted average is (1 * 3 / 6) + (2 * 1 / 6) + (1 * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0. 
The function must return 0 if the size parameter, n, is less than 1.*/

#include <iostream>
#include <set>
using namespace std;

void weighted_average(int array[], int n)
{
    // if (n < 1) 
    // {
    //     return 0;
    // }
    // element that appear --> how many times appeared --> function math
    
    //if it's different to the existing one --> update new one
    int first = array[0];
    set <int> unique_num; // using library set that auto show unique num 

    for (int i = 0; i < n; i++)
    {
        unique_num.insert(array[i]); 
    }
    
    for (auto& unique : unique_num)
    {
        cout << unique << " ";
    }
    

}
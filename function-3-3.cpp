/*Write a function that given an array and its length, returns the weighted average of the array, 
defined as Σ xi * wi / n, where xi represents all the distinct elements in the array, 
wi represents how many times the value of element xi appears in the array, and n is the size of the array. 
eg. if  the array is {1,2,1,4,1,3} 
the weighted average is (1 * 3 / 6) + (2 * 1 / 6) + (1 * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0. 
The function must return 0 if the size parameter, n, is less than 1.*/

#include <iostream>
#include <algorithm>
using namespace std;
#include <unordered_map>

double weighted_average(int array[], int n)
{
    if (n < 1) 
    {
        return 0;
    }
    
    // Count the frequency of each element using unordered_map
    std::unordered_map<int, int> frequency;
    for (int i = 0; i < n; ++i)
    {
        frequency[array[i]]++;
    }

    double sum = 0.0;

    // Iterate through the frequency map and calculate the weighted sum
    for (const auto& pair : frequency)
    {
        sum += pair.first * pair.second;
    }
    
    // Calculate the weighted average
    double avg = sum / n;

    return avg;
}

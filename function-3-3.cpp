/*Write a function that given an array and its length, returns the weighted average of the array, 
defined as Σ xi * wi / n, where xi represents all the distinct elements in the array, 
wi represents how many times the value of element xi appears in the array, and n is the size of the array. 
eg. if  the array is {1,2,1,4,1,3} 
the weighted average is (1 * 3 / 6) + (2 * 1 / 6) + (1 * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0. 
The function must return 0 if the size parameter, n, is less than 1.*/

#include <iostream>
using namespace std;
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) // If size parameter is less than 1, return 0
    {
        return 0.0;
    }    

   // find unique elements and their frequency
    std::unordered_map<int, int> freq;
    for(int i = 0; i < n; i++)
    {
        freq[array[i]]++;
    }

    //calculate the total frequency
    int total_freq = 0;
    for(auto it = freq.begin(); it != freq.end(); it++)
    {
        total_freq += it->second;
    }

    //loop through the array and multiply each elements by its frequency
    double sum = 0.0;
    for ( int i =0; i < n; i++)
    {
        sum += array[i] * freq[array[i]];

    }

    //return the weighted avg
    return sum / total_freq;
}

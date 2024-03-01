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

double weighted_average( int arr[], int n) {

    if (n < 1) {
        return 0;
    }
    // Create a hash map to store frequency of elements
    std::unordered_map<int, int> frequency;

    // Calculate frequency of each element
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

    // Calculate total frequency
    int totalFrequency = 0;
    double weightedSum = 0.0;
    for (const auto& pair : frequency) {
        totalFrequency += pair.second;
        weightedSum += pair.first * pair.second
    }

   


    return weightedSum / totalFrequency;
}

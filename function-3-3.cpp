/*Write a function that given an array and its length, returns the weighted average of the array, 
defined as Σ xi * wi / n, where xi represents all the distinct elements in the array, wi represents 
how many times the value of element xi appears in the array, and n is the size of the array. 
eg. if  the array is {1,2,1,4,1,3} the weighted average is 
(1 * 3 / 6) + (2 * 1 / 6) + (1 * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0. 
The function must return 0 if the size parameter, n, is less than 1.*/

#include <iostream>
#include <map>
using namespace std;

double weighted_average(int array[], int n);

int main (void)
{
    int array[] = {1,2,1,4,1,3};
    int n = sizeof(array)/sizeof(array[0]);
    cout << weighted_average(array, n);
}

double weighted_average(int array[], int n)
{
    if (n < 1)
    {
        return 0;
    }

    // find unique number then frequency
    map <int, int> mp;
    map <int, int>::iterator it;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        mp[array[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        sum += mp[array[i]];
    }

    //weigted average 
    int weight = 0;

    // correct calculation
    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     weight = weight + (it->first * it->second);
    //     // weight = weight + (array[it] * it->second);
    // }

    // wrong calculation
    for (int k = 0; k < n; k++)
    {
        weight += array[k] * mp[array[k]];
    }
    return (double) weight/n;
}
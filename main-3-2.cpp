/*Given an array of integers and its length, return the median of the array. The median of a list is the middle number
of the sorted list. E.g. the array {3,5,2,1,4} after sorting becomes {1,2,3,4,5} which has a median of 3. 
The function must return 0 if the size parameter, n, is even or if it is less than 1.*/

#include <iostream>
using namespace std;

int median_array(int array[], int n);

int main (void)
{
    int array[] = {3,5,2,1,4,6,7};
    int length = sizeof(array) / sizeof(array[0]);
    cout << median_array(array, length) << "\n";
}
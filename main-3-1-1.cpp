/* Write a function that given an array of integers, and its length, determine if the array is a 'fan' array, i.e. 
the entire array is a palindrome with the numbers in ascending order from the start to the middle element. 
e.g. {1,2,3,2,1} and {2,4,4,2} are both fan arrays but, {1,2,1,2,1} and {1,3,5,4,2} are not. 
The function must return false if the size parameter, n, is less than 1.*/


#include <iostream>
#include <cmath>
using namespace std;

bool is_fanarray(int array[], int n);

int main()
{
    int test_array[] = {2,4,1,4,2};
    int n = sizeof(test_array) / sizeof(test_array[0]);
    bool result = is_fanarray(test_array, n);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}

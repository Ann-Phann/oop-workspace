#include <iostream>
using namespace std;

int sum_if_palindrome(int integers[], int n);

int main(void) 
{
    int test_arr[] = {1, 2, 3, 4, 3, 2 ,1};
    int n = sizeof(test_arr) / sizeof(test_arr[0]);
    cout << sum_if_palindrome(test_arr, n);
}

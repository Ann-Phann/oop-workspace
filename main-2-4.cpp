#include <iostream>
using namespace std;

int sum_min_max(int integers[], int length);

int main (void)
{
    int array[] = {-2,5,4,3,2,9,0,1};
    int n = sizeof(array) / sizeof(array[0]);
    cout << sum_min_max(array, n);
}
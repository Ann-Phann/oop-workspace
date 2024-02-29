#include <iostream>
using namespace std;

int array_sum (int array [], int n);

int main (void)
{
    int array[6] = {1, 3, 6, 8};
    int n = sizeof(array)/sizeof(array[0]);
    cout << array_sum (array, n) << "\n";
}
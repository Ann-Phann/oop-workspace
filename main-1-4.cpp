#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n);

int main(void)
{
    int array[] = {2,4,6,8};
    int secondary[] = {1,3,5,7};
    int n = sizeof(array)/ sizeof(array[0]);
    cout << sum_two_arrays (array, secondary, n) << "\n";
}
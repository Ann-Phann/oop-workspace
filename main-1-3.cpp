#include <iostream>
using namespace std;

const int number = 3;

int num_count(int array[], int n, int number);

int main (void)
{
    int array[] = {5,3,2,6,7,3};
    int n = sizeof(array) / sizeof(array[0]);
    cout << num_count(array, n, number) << endl;
}

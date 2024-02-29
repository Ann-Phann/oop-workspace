#include <iostream>
using namespace std;

int max_element(int array[], int n);

int main (void)
{
    int array[] = {-2, 5, 10, 3, 20};
    int n = sizeof(array) / sizeof(array[0]);
    cout << "max: " << max_element(array, n) << "\n";
}
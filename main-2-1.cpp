#include <iostream>
using namespace std; 

int min_element(int array[], int n);

int main (void)
{
    int array [] = {5, -1, 3, 0, -5};
    int n = sizeof (array) / sizeof(array[0]);
    cout << "min: " << min_element(array, n) << "\n";
}
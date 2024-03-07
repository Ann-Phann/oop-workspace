#include <iostream>
using namespace std; 

int binary_to_int (int binary_digits[], int number_of_digits);

int main (void)
{
    int binary_array[] = {1,0,0,1,1};
    int length = sizeof(binary_array) / sizeof(binary_array[0]);
    cout << binary_to_int (binary_array, length);
}
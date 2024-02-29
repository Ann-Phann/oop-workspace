#include <iostream>
using namespace std; 

void two_five_nine(int array[], int n);

int main (void)
{
    int array[] = {2,5,1,3,9,2,9,8,5,4,26,9};
    int n = sizeof(array) / sizeof(array[0]);
    two_five_nine(array, n);
}

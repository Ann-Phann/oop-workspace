#include <iostream>
using namespace std; 

void weighted_average(int array[], int n);

int main (void) 
{
    int array[] = {1,2,1,4,1,3};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout <<"weighted average of the array: " << weighted_average(array, n) << endl; 
    return 0;
}
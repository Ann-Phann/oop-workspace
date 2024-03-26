#include <iostream>
using namespace std;

void hexDigits(int *numbers, int length) ;

int main (void)
{
    int array[] = {10, 4, 5, 11};
    int n = sizeof(array)/ sizeof(array[0]);
    int* result = array;
    hexDigits(result, n);
}
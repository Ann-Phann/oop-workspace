#include <iostream>
using namespace std;

void count_digits(int array[4][4]);

int main (void)
{
    int array [4][4] = {
        {1,3,5,7},
        {2,4,6,8},
        {0,1,2,3},
        {9,9,9,9}
    };
    count_digits (array);
}


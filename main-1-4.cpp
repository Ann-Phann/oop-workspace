#include <iostream>
using namespace std; 

void print_scaled(int array[3][3],int scale);

int main (void)
{
    int scale = 3;
    int array [3][3] = {
        {1,2,3},
        {2,3,4},
        {3,5,7}
    };
    print_scaled(array, scale);

}
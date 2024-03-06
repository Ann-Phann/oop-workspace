#include <iostream>
using namespace std;

int sum_diagonal(int array[4][4]);

int main (void)
{
    int array[4][4]  = {
        {1,2,3,4},
        {4,5,6,7},
        {1,2,3,4},
        {1,2,3,4}
    };
    cout << sum_diagonal(array);
}

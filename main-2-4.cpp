#include <iostream>
using namespace std;

bool is_ascending(int array[], int n);

int main (void)
{
    int array [] = {7,6,2,3,5};
    int n = sizeof(array) / sizeof(array[0]);
    if (is_ascending(array, n))
    {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
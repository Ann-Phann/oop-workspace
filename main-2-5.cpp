#include <iostream>
using namespace std;

bool is_descending(int array[], int n);

int main (void)
{
    int array[] = {7,6,9,2,1};
    int n = sizeof(array) / sizeof(array[0]);
    if (is_descending(array, n))
    {
        cout << "true";
    } else {
        cout << "false";
    }
}
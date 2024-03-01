#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n);

int main (void)
{
    int array [] = {2,4,1,1,4,2};
    int n = sizeof(array) / sizeof(array[0]);
    if (is_fanarray(array, n)) {
        cout << "true";
    } else {
        cout << "false";
    }
}
#include <iostream>
using namespace std;

int *readNumbers();
int secondSmallestSum(int *numbers,int length) ;

int main (void)
{
    int* enter = readNumbers();
    cout << secondSmallestSum(enter, 3);
    delete [] enter;
}
#include <iostream>
using namespace std;

int *readNumbers();
bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main (void)
{
    int* result1 = readNumbers();
    int* result2 = readNumbers();
    cout << boolalpha << equalsArray(result1, result2, 5);
    delete [] result1;
    delete [] result2;
}
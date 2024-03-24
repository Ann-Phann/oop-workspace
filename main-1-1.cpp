#include <iostream>
using namespace std;

int *readNumbers();
void printNumbers(int *numbers,int length);

int main(void)
{
    int* result;
    result = readNumbers();
    int n = 10;
    printNumbers(result, n);
    delete [] result;
}
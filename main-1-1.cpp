#include <iostream>
using namespace std;

int *readNumbers();
void printNumbers(int *numbers,int length);

int main(void)
{
    int* result;
    result = readNumbers();
    printNumbers(result, 10);
    delete [] result;
}
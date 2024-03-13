/*1-2: Modify Array [5 marks]
In a file named function-1-2.cpp, create a function named modifyArray that accepts a pointer 
to an array of doubles, its size, and a double value as arguments.  The function should add the double value 
to each element in the array. In your main-1-2.cpp, create a double array, call this modifyArray function with a value.*/

#include <iostream>
using namespace std;

void modifyArray(double* array, int size, double value)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] + value << " ";
    }
}
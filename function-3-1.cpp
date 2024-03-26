/*Write a function, equalsArray that when passed two int arrays of the same length that is greater than 0 will return true 
if every number in the first array is equal to the number at the same index in the second array. If the length of the arrays 
is less than 1 the function must return false. For example, comparing the two arrays, {1,2,3,4,5} and {1,2,3,4,5} would return true 
but the two arrays {3,7} and {3,6} would return false.

You should start by copying the function-1-1.cpp file and name it function-3-1.cpp. Then add the function equalsArray to the new file.

The main function for this problem must call your readNumbers function twice, then pass both new arrays to your 
equalsArray function, display the result as true or false and finally delete the array. The main function in the file main-3-1.cpp.*/

#include <iostream>
using namespace std;

int *readNumbers()
{
    int* array = new int[5]; 
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    return array;
}

bool equalsArray(int *numbers1,int *numbers2,int length)
{
    if (length < 1)
    {
        return false;
    }

    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] != numbers2[i])
        {
            return false;
        }
    }
    return true;
}
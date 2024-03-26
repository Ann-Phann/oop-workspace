/*Write a function, reverseArray that when passed an int array of length greater than 0 will return a dynamically allocated array of the 
same length but with the elements in the reverse order. For example, if passed the array, {1,2,3,4,5,6,7,8,9,0} the function would 
return the array {0,9,8,7,6,5,4,3,2,1}.
You should start by copying the function-3-1.cpp file and name it function-3-2.cpp. Then add the function reverseArray to the new file.

The main function for this problem must call your readNumbers function, then pass the new array to your reverseArray function, 
then pass the first array and the array returned by reverseArray to equalsArray, display the result as true or false and finally 
delete both arrays. The main function in the file main-3-2.cpp.*/

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

int *reverseArray(int *numbers1,int length) 
{
    int* reverse = new int[length];
    for (int i = 0; i < length; i++)
    {
        reverse[length - 1 - i] = numbers1[i];
    }
    return reverse;
}

void print (int* reverse, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << reverse[i] << " ";
    }
    cout << endl;
}
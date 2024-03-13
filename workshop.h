#include <iostream>
using namespace std;

void changeValue(double* num)
{
    *num = 42;    
    // cout << "after change value is: " << *num << endl;
}

void printArray(double* array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

double arrayMax(double* array, int n)
{
    double max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

// double* dynamicArray(int size)
// {
//     double* new_array = new double[size];
//     for ( int i = 0; i < size; i++)
//     {
//         new_array[i] = i;
//     }

//     for (int j = 0; j < size; j++)
//     {
//         cout << new_array[j] << " ";
//     }
//     cout << endl;
//     return new_array;
// }

double* dynamicArray(int size, double m)
{
    double* new_array = new double[size];
    for (int i = 0; i < size; i++)
    {
        new_array[i] = m;
    }
    
    // for (int j = 0; j < size; j++)
    // {
    //     cout << new_array[j] << " ";
    // }
    // cout << endl << endl;
    return new_array;
}
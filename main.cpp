#include <iostream>
#include "workshop.h"
using namespace std; 

int main (void)
{
    //part 1
    double double_num = 10;
    char character = 'a';
    double* ptr_num = &double_num;
    char* ptr_char = &character;
    cout << "value double: " << *ptr_num << endl;
    cout << "address double: " << ptr_num << endl;

    //part 2
    changeValue(ptr_num);
    cout << endl;

    //part 3
    double array[] = {10, 20, 30, 40, 50};
    int length = sizeof(array)/sizeof(array[0]);
    printArray(array, length);

    //part 4
    cout << arrayMax(array,length) << endl;
    
    //part 6
    int size;
    cout << "size: ";
    cin >> size;
    double m = 1;
    double* arr = dynamicArray(size, m);    
    // cout << arrayMax(arr, size);
    //delete [] arr;

    //part 8

    printArray(arr,size);
    cout << arrayMax(arr, size);
    delete [] arr;
}
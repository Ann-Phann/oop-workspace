//Write a program to swap two numbers using pointers.

#include <iostream>
using namespace std;

void swap(int* x,int* y)
{
    int t;
    t   = *x;
    *x   = *y;
    *y   = t;
}

int main()
{
    int num1,num2;

    cout << "Enter value of num1: ";
    cin >> num1;
    cout << "Enter value of num2: ";
    cin >> num2;

    //displaying numbers before swapping
    cout << "Before Swapping: num1 is:"  <<num1 << ", num2 is:" << num2 << endl;

    //calling the user defined function swap()
    swap(num1,num2);

    //displaying numbers after swapping
    cout << "After Swapping: num1 is:"  <<num1 << ", num2 is:" << num2;

    return 0;
}
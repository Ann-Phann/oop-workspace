/*Given a binary number represented as an array, write a function that takes the array and its size as a parameter, 
and returns the integer value. You may assume that there are at least 1 and no more than 30 numbers in the array and 
that all the values are either 0 or 1. The array is ordered with most significant binary digit at the start (index 0) 
and the least significant digit at the end.*/

#include <iostream>
#include <cmath>
using namespace std; 

int binary_to_int (int binary_digits[], int number_of_digits)
{
    int decimal_num = 0;
    for (int i = 0; i < number_of_digits; i++)
    {
        decimal_num = decimal_num + binary_digits[i] * pow(2,i);
    }
    return decimal_num;
}

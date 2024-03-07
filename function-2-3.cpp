#include <iostream>
using namespace std; 

// sum if palindrome

bool is_palindrome( int integers[], int n);
int sum_elements( int integers[], int n);


int sum_if_palindrome(int integers[], int n) 
{
    int result_sum = 0;
    if ( n < 1)
    {
        return -1;
    }

    if( is_palindrome(integers, n))
    {
        result_sum = sum_elements(integers, n);
    } else {
        return -2;
    }

    return result_sum;
}

bool is_palindrome( int integers[], int n) 
{
    if ( n < 1)
    {
        return false;
    }

     if (n % 2 != 0)
    {
        for (int i = 0; i < n/2; i++)
        {
            if ((integers[i] != integers[n-1-i]))
            {
                return false;
            }
        }
    }

    if (n % 2 == 0)
    {
        for (int i = 0; i < n/2 -1; i++)
        {
            if ((integers[i] != integers[n-1-i]))
            {
                return false;
            }
        }
    }
    return true;
}

int sum_elements( int integers[], int n)
{
    if ( n < 1)
    {
        return -1;
    }

    int sum = 0;

    for ( int k = 0; k < n; k++)
    {
        sum += integers[k];
    }
    return sum;
}
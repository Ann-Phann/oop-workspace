/*Write a function that given an array of integers and the length of the array, will count the amount of times 
the numbers 2, 5 and 9 appear using a switch statement. The function must print out your results on one line in the following form:*/

#include <iostream>
using namespace std;

void two_five_nine(int array[], int n);

int main (void)
{
    int array[] = {2,5,9,1,5,9};
    int n = sizeof(array)/sizeof(array[0]);
    two_five_nine(array, n);
}

void two_five_nine(int array[], int n)
{

    int count2 = 0;
    int count5 = 0;
    int count9 = 0;
    for (int i = 0; i < n; i++)
    {
        switch (array[i])
        {
        case 2:
            count2++;
            break;
    
        case 5:
            count5++;
            break;
    
        case 9:
            count9++;
            break;
    }
    }
    cout << "2:" <<count2 << "; 5:" <<count5 << "; 9:" <<count9 <<endl;
}
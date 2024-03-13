/*Write a function that returns the number of elements in an array that are equal to a given parameter. 
The function should take as parameters the array, its size, and the desired number. The function should return 0 
if the size parameter, n, is less than 1.*/

#include <iostream>
using namespace std;

int num_count(int array[], int n, int number);

int main (void)
{
    int array[] = {1,2,3,1,1,5,6,1,4};
    int n = sizeof(array)/ sizeof(array[0]);
    int num = 1;
    cout << num_count(array,n,num);
}

int num_count(int array[], int n, int number)
{
    if (n < 1)
    {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (number == array[i])
        {
            count++;
        }
    }
    return count;
}

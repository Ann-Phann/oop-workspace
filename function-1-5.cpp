/*Using a for loop, count the number of even numbers between 1 and a number we supply (inclusive). 
Return 0 if the parameter is less than 1.*/

#include <iostream>
using namespace std;

int count_evens(int number);

int main (void)
{
    int num;
    cout << "number: ";
    cin >> num;
    cout << count_evens(num);
}

int count_evens(int number)
{
    if (number < 1)
    {
        return 0; 
    }

    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
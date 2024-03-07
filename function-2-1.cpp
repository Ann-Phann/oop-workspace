// // base 10 to base 2; string is input

#include <iostream>
#include <string>
using namespace std;

void print_binary_str (std :: string decimal_number)
{
    int num = stoi(decimal_number);
    int *binary = new int[32];
    int i = 0;

    while (num != 0)
    {
        binary[i] = num % 2;
        num = num/2;
        i++;

    }

    for (int k = i-1; k >= 0; k--)
    {
        cout << binary[k];
    }
    cout << endl;
    delete [] binary;


}

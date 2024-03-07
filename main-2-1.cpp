#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void print_binary_str (string decimal_number);

int main (void)
{
    string decimal_num;
    cout << "Type decimal number: ";
    // do 
    // {
        cin >> decimal_num;
    // }
    // while ((!isdigit(decimal_num)));

    print_binary_str (decimal_num);
}


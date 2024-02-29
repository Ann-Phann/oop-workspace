#include <iostream>
using namespace std;

int count_evens(int number);

int main (void)
{
    int input;
    cout << "type number: ";
    cin >> input;
    cout <<  "numbers of even: " << count_evens(input) << endl;
}
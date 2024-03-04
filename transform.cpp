/* transform from base 10 to base 2 
e.g: 35
--> divide 2: 35/2 = 17
--> % 2: 35%2 = 1 

--> 17/2 = 8
--> %2: 17%2 = 1 

--> 8/2 = 4 
--> 8%2 = 0

--> 4/2 = 2 
--> 4%2 = 0

--> 2/2 = 1
--> 2%2 = 0

--> 1/2 = 0
--> 1%2 = 1 */


#include <iostream>
using namespace std; 

void base10to2 (int n);

int main (void)
{
    int number; 
    cout << "number from base 10 to base 2: ";
    cin >> number;
    base10to2 (number);
}

void base10to2 (int n)
{
    int remainder;
    int i = 0;
    //how to save remainder? --> new array
    int binary[] = {};
    

    //get binary remainder
    while (n != 0)
    {
        remainder = n%2;
        n = n/2;
        binary[i] = remainder;
        i++;
    }

    // reverse the number since it not in right place
    for (i = i -1; i >= 0; i--)
    {
        cout << binary[i];
    }
    cout << endl;
}

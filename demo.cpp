#include <iostream>
using namespace std;

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int* ip;
    ip = &a[2];
    cout << "array address: " << &a[0] << endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "a[" << i << "] = " << a[i] << " ";
    }
    cout << endl;
    *ip = 500;
    for (int i = 0; i < 5; i++)
    {
        cout << "a[" << i << "] = " << a[i] << " ";
    }
}
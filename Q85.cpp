#include <iostream>
using namespace std;

void fun()
{
    static int count = 0;
    if (count == 4){
        cout << count << " ";
    }
    count++;
}

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        fun();
    }
    cout << endl;
    return 0;
}
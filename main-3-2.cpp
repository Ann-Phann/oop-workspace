#include <iostream>
using namespace std;

int *readNumbers();
void print (int* reverse, int length);
int *reverseArray(int *numbers1,int length) ;
bool equalsArray(int *numbers1,int *numbers2,int length);


int main (void)
{
    cout << "first array of 5 numbers: ";
    int* enter = readNumbers();
    int* reverse = reverseArray(enter, 5);
    print(reverse, 5);
    cout << boolalpha << equalsArray(enter, reverse, 5);
    delete [] enter;
    delete [] reverse;
}

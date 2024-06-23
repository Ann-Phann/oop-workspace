#include <iostream>
using namespace std;

class fun {
    int i;
public:
    fun(){
        i = 0;
        cout << "Constructor " << endl;
    }
    ~fun(){
        cout << "Destructor " << endl;
    }
};

int main(void)
{
    fun f;
    cout << "Main " << endl << endl;

    int x = 0;
    if (x == 0)
    {
        fun f1;
    }
    cout << "Main " << endl;
    
}
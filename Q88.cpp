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
    void print()
    {
        cout << "Print " << endl;
    }
};

int main(void)
{
    int x = 0;
    if (x == 0)
    {
        static fun f1;
    }
    cout << "Main " << endl;
    f1.print();
    
}
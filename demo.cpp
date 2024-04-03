#include <iostream>
using namespace std;

class A
{
    private:
        int xA;

    public:
        A() {
            xA = 10;
        }
        int get_xA() const
        {
            return xA;
        }
        void set_xA (int new_xA)
        {
            xA = new_xA;
        }
        
};
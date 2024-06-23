#include <iostream>
using namespace std;

class MyClass {
    int nonStaticVar;
    static int staticVar;
public:
    MyClass(): nonStaticVar(10){}
    static void fun1()
    {
        staticVar++;
    }

    static void fun2()
    {
        staticVar++;
        std::cout << staticVar << std::endl;

        nonStaticVar++;
    }
};
/*Since one of the variables is not static and one of the static functions is trying to access it. It will
generate an error.
Static functions cannot directly access non static member variables*/
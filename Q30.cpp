#include <iostream>

class A {
private:
    int* _x;

public:
    A(int x) {
        _x = new int;
    }

    A() : A(0){}

    void set_x (int x) {*_x = x;}

    int get_x() { return *_x;}

    ~A() { delete _x;}
};

int main ()
{
    A* a;

    a->set_x(10);
    std::cout << a->get_x() << std::endl;
    return 0;

}

//segmentation fault
/*
The segmentation fault in your code occurs because the pointer a in main() is uninitialized. 
When you declare A* a;, it creates a pointer to an object of type A, but it does not point to 
any actual A object. Therefore, attempting to dereference a with a->set_x(10); leads to 
undefined behavior and causes a segmentation fault.

Solution:
Dynamic Allocation (Method 1):
A* a = new A(); allocates memory for an A object and initializes it.
delete a; frees the allocated memory to avoid memory leaks.

Direct Instance Creation (Method 2):
A a; directly creates an A object on the stack.
No need for manual memory management, as the object is automatically destroyed when it goes out of scope.*/

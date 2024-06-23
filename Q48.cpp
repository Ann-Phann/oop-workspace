#include <iostream>     

class A{
protected:
    int _x;

public:
    A() :_x (100){}

    virtual void foo() {
        std::cout << this->_x << std::endl;
    }
};

class B : public A {
private:
    int _y;

public:
    B():_y(200){}

    void foo () {
        //std::cout << this->_x << " " << this->_y << std::endl;
        std::cout << "20"<< " " << this->_y << std::endl;
    }
};

void test(A* a){
    a->foo();
    //Takes a pointer to an object of type A.
    //Calls the foo method on the object pointed to by the pointer.
}

int main(){
    B b;
    test(&b);
    return 0;
}

/*
In C++, when you have a derived class object, you can use a pointer to 
the base class to refer to it. This works because of the "is-a" relationship 
in inheritance: an object of the derived class B is also an object of the base class A.

When you pass the address of a derived class object (b) to a function that takes 
a pointer to the base class (A*), the function can use that pointer to access the 
base class part of the derived class object. If the base class has virtual functions 
and they are overridden in the derived class, the derived class versions will be called, 
thanks to the vtable mechanism.*/
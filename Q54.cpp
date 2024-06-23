#include <iostream>

struct Point {
    int x;
    int y;
};

class A {
protected:
    Point* _c;

public:
    A() {_c = new Point{0,0};}

    ~A() {
        delete _c;
        std::cout << "c deleted\n";    
    }
};

class B : public A {
private:
    Point* _d;

public:
    B() {_d = new Point{0,0};}

    ~B() {
        delete _d;
        std::cout << "d deleted\n";
    }
};

int main(void)
{
    A* obj = new B();
    delete obj;
}

//The output will be: c deleted
/*Since there is no virtual function, the compiler says that it is an object of the base class (line 27)
and use its destructor. And the memory will not be deallocated for the child class*/
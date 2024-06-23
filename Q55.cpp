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

    virtual ~A() {
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
/*Output:
Point d deleted
Point c deleted
Since it is a virtual function, the runtime compiler can work properly and delete each memory
allocation first from the subclass which then calls the parent class. So classes with virtual
functions also need virtual destructors to deallocate memory properly*/
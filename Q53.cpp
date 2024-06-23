#include <iostream>

struct Point {
    int x;
    int y;
};

class A {
private:
    Point* _p;

public:
    A(){
        _p = new Point{10, 10};
    }

    //copy constructor
    A(const A &a2) {
        _p = new Point{a2._p->x, a2._p->y};
    }

    void set_p (int x, int y){
        _p->x = x;
        _p->y = y;
    }

    Point get_p() {return *_p;}
};

int main(void)
{
    A a1;
    a1.set_p(20, 20);
    A a2 = a1;
    a1.set_p(30, 30);
    std::cout << a2.get_p().x <<" "<< a2.get_p().y << std::endl;
}

/*When A a2 = a1; is executed, the custom copy constructor creates a new Point object for a2 with the same values as a1 at the time of copying.
Changing a1 after the copy does not affect a2 because a2 has its own separate copy of the Point object.*/
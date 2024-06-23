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

//because we are using pointers, we are doing a shallow copy, so the values of a2 will be changed
//In this case since we have initialized pointers that
//means when it copies, a2 is pointing to the same address meaning that if an object’s pointer’s
//values are changed, it is changed for both objects
//week 6-2: copy constructors and virtual decontructors

#include <iostream>

struct Point {
    int x;
    int y;
};

class A {
private:
    Point _p;

public:
    A(){
        _p = {10, 10};
    }

    void set_p (int x, int y){
        _p.x = x;
        _p.y = y;
    }

    Point get_p() {return _p;}
};

int main (void)
{
    A a1;
    a1.set_p(20, 20);
    A a2(a1);
    std::cout << a2.get_p().x <<" "<< a2.get_p().y << std::endl;

}
/*We are creating an object from another object and since we haven’t defined a copy constructor
the compiler will call the default copy constructor and basically copy the values from a1 to a2
(member wise copy)
This is an example of shallow copy.*/
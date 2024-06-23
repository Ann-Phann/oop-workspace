//week 8-1: class diagram

//week 9-1: templates
#include <iostream>
template <class T>
class Point {
private:
    T _x = 0;
    T _y = 0;
public:
    Point(T x, T y) : _x(x), _y(y) {}
    void setPoint(T x, T y) {_x = x; _y = y;}
    T getPoint_x() { return _x; }
    T getPoint_y() { return _y; }
};

//method 1:
typedef Point<float> Pointf;
int main(void){
    //method 2:
    // Point <float> p1(1.1, 2.2);
    //if using method 2, there is no line 23
    Pointf p1(1.1, 2.2);
    std::cout << p1.getPoint_x() << " " << p1.getPoint_y() << std::endl;
}

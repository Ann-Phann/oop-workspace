#include <iostream>

template <class T, class K>
class Point {
private:
    T _x = 0;
    K _y = 0;
public:
    Point(T x, K y) : _x(x), _y(y) {}
    void setPoint(T x, K y) {_x = x; _y = y;}
    T getPoint_x() { return _x; }
    K getPoint_y() { return _y; }
};

typedef Point<float, int> Point_i;
typedef Point_i* Point_i_ptr;

int main(void)
{
    Point_i** ps = new Point_i_ptr[2];
    ps[0] = new Point_i(1.1, 2);
    ps[1] = new Point_i(3.3, 4);
    std::cout << ps[0]->getPoint_x() << " " << ps[0]->getPoint_y() << std::endl;
    delete ps[0];
    delete ps[1];
}
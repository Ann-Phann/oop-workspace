#include <iostream>
#include <vector>

template <class T>
struct Point {
    T _x = 0;
    T _y = 0;
};
typedef Point<int> Point_i;
int main(void)
{
    std::vector <Point_i*> v;
    Point_i* p1 = new Point_i;
    v.push_back(p1);
    std::cout << v[0]->_x << std::endl;
}
#include <iostream>
#include <vector>

template <class T>
struct Point {
    T _x = 0;
    T _y = 0;
};

int main(void)
{
    std::vector <Point<int>> v;
    Point <int> p1;
    v.push_back(p1);
    std::cout << v.size() << std::endl;
}
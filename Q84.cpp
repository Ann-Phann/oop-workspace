#include <iostream>
#include <vector>

struct Point {
    int _x = 0;
    int _y = 0;
};

int main(void)
{
    std::vector <Point> v;
    v.resize(5);
    std::vector<Point>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
    {
        std::cout << it->_x << std::endl;
    }
}
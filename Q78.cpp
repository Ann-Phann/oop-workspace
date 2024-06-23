#include <iostream>
#include <vector>

template <class T>
struct Point {
    T _x = 0;
    T _y = 0;
};

int main(void)
{
    std::vector <Point> v;
    Point <int> p1;
    v.push_back(p1);
    std::cout << v.size() << std::endl;
}
/*Output:
Error
We’re creating a point structure that will be a template in the template. And then we are trying to
make a vector of points but we are not providing a template argument for what types the
templates are (ints, floats etc*/
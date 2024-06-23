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
    Point_i p1;
    v.push_back(p1);
    std::cout << v.size() << std::endl;
}
/*Output:
Error
We have initialized a vector of pointers and are trying to push an object to the vector which we
cannot do*/
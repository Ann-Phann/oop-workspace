#include <iostream>
#include "Shape.h"
using namespace std;

class Circle : public Shape 
{
private:
    double radius;

public:
    Circle(double cx, double cy, double c_radius)
    {
        center.x = cx;
        center.y = cy;
        radius = c_radius;
    }

    double get_area()
    {
        const double PI = 3.14;
        return PI * radius * radius;
    }
};
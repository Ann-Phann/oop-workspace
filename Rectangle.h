#include <iostream>
#include "Shape.h"
using namespace std;

class Rectangle : public Shape 
{
private:
    double wide;
    double length;
public:
    Rectangle(double cx, double cy, double r_wide, double r_length) 
    {
        center.x = cx;
        center.y = cy;
        wide = r_wide;
        length = r_length;
    }

    double get_area()
    {
        return wide*length;
    }
};
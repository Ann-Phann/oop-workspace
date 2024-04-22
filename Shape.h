#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

class Shape {
protected:
    Point center;

public:
    Shape() {
        center.x = 0;
        center.y = 0;
    }
    virtual double get_area() 
    {
        return 0.0;
    }
};
#endif
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include "Drawable.h"
using namespace std;

struct Point {
    double x;
    double y;
};

class Shape : public Drawable {
protected:
    Point center;

public:
    Shape() {
        center.x = 0;
        center.y = 0;
    }
    virtual double get_area() = 0;
    void draw() const override {
        cout << "Drawing a shape" << endl;
    }
};
#endif
#include <iostream>
#include "Shape.h"
using namespace std;

class Triangle : public Shape 
{
private:
    double base;
    double height;
public:
    Triangle (double t_base, double t_height)
    {
        base = t_base;
        height = t_height;
    }

    double get_area() {
        double area = base*height*1/2;
    }

    void draw() const override {
        cout << "Drawing a Triangle";
    }
};
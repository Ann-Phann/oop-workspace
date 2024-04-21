#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point
{
private:
    int* _x;
    int* _y;

public:
    Point() {
        _x = new int;
        _y = new int;
        *_x = 0;
        *_y = 0;
    }

    Point(const Point &pnt) {
        _x = new int;
    }
};

#endif

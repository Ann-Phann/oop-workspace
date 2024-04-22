//Q1-1: Shape Class Hierarchy

#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

int main (void)
{
    const int numShapes = 2;
    Shape* shapes[numShapes];

    // Create instances of Circle and Rectangle
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    // Print the area of each shape
    for (int i = 0; i < numShapes; i++) {
        cout << "Area of shape " << i + 1 << ": " << shapes[i]->get_area() << endl;
    }

    // Clean up allocated memory
    for (int i = 0; i < numShapes; i++) {
        delete shapes[i];
    }

}

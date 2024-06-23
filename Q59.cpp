#include <iostream>

class Shape {
public:
    float get_area() {
        return 0;
    }
};

class Circle : public Shape {
private:
    float _radius = 10;

public:
    float get_area() {
        return 3.14 * _radius * _radius;
    }
};

void print_shape (Shape* s) {
    std::cout << s->get_area() << std::endl;
}

int main(void){
    Shape* s[2];
    s[0] = new Circle();
    s[1] = new Shape();
    print_shape(s[0]);
}

//output = 0;
/*There is only a generic function (no virtual functions were initialized) so it calls the function of
the pointer type*/
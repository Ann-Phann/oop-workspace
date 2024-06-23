#include <iostream>

class Shape {
public:
    virtual float get_area() = 0;
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
/*Does not compile
Shape is an abstract class since it contains a pure virtual function. In this case we are trying to
instantiate (make an object of) shape which the compiler will not let us do*/
#include <iostream>

class Shape {
public:
    virtual float get_area() {
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
    Shape* s = new Circle();
    print_shape(s);
}


//output = 314
//A virtual function has been declared, so it uses the function from the content of the pointer.
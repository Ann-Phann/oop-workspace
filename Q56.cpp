//week 7-1: Abstract class

#include <iostream>
class shape {
public:
    float get_area() {
        return 0;
    }
};

class Circle : public shape {
private:
    float _radius = 10;

public:
    float get_area() {
        return 3.14 * _radius * _radius;
    }
};

void print_shape (shape* s) {
    std::cout << s->get_area() << std::endl;
}

int main(void){
    shape* s = new Circle();
    print_shape(s);
}

/*There is no virtual function so it calls the function from the pointer type which is in this case a
parent class
Output 0*/
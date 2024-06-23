#include <iostream>

class A {
private:
    int _size;
    int* _x;

public:
    A(int size) : _size(size) {
        _x = new int[size];
    }

    A() : A(0) {}

    void print_x() {
        for (int i = 0; i < _size; i++) {
            std::cout << _x[i] << " ";
        }
    }
};

int main(void) {
    A a(3);
    a.print_x();
}

/*The code exhibits undefined behavior because the dynamically allocated array _x is not 
initialized. When you create an instance of A with a size of 3 (e.g., A a(3);), the array _x 
is allocated with 3 int elements, but these elements are not initialized to any specific value. 
Accessing uninitialized memory (like _x[i] in print_x) results in undefined behavior.*/
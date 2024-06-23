#include <iostream>

class B {
private:
    int _id;

public:
    B(int id) {_id = id;}

    B() : B(0) {std::cout << "+B ";}
    
    int get_id() {return _id;}
    void set_id(int id) {_id = id;}
    ~B() {std::cout << "-B ";}

};

class A {
private:
    B *b;

public:
    A() {std::cout << "+A ";}
    // A() {
    //     b = new B(); // Allocate memory for B and call its default constructor
    //     std::cout << "+A ";}
    // ~A() {std::cout << "-A ";}
};

int main(void)
{
    A a;
}
//+A -A
// because b is a pointer, not an object
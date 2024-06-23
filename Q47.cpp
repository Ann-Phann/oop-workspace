#include <iostream>     

class A{
protected:
    int _x;

public:
    A() :_x (100){}

    void foo() {
        std::cout << this->_x << std::endl;
    }
};

class B : public A {
private:
    int _y;

public:
    B():_y(200){}

    void foo () {
        std::cout << this->_x << " " << this->_y << std::endl;
    }
};

void test(A* a){
    a->foo();
}

int main(){
    B b;
    test(&b);
    return 0;
}
//still use A's function as declared in the parameters despite being given the address of B
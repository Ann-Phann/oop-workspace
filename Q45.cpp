//week 6-1: polymorphism

/*
Virtual functions allow for polymorphism, which means that when a virtual function is made in a
parent class, their subclasses can override them (change what the function does). Runtime
polymorphism happens when using a pointer to an object when the compiler can decide, on run
time which function to call*/

#include <iostream>

class Car {
protected:
    std::string _model;
    int _year;

public:
    Car(std::string model, int year) : _model(model), _year(year) {}    
    Car() : Car("", 0){}
    
    //add this virtual function to work
    virtual int get_topSpeed() {return 0;}
};

class SportsCar : public Car {
private:
    int _topSpeed;

public:
    SportsCar(std::string model, int year, int topSpeed)
        : Car(model,year), _topSpeed(topSpeed){}

    SportsCar() : SportsCar("", 0, 0){}

    int get_topSpeed() {return _topSpeed;}
};

int main (void)
{
    Car* a_car = new SportsCar("Ferrari", 2020, 200);
    std::cout << a_car->get_topSpeed() << std::endl;
}

/*this will not compile due to an attempt to call the get_topSpeed() method on a Car pointer, which does not 
have this method defined. In C++, you cannot directly call a derived class method from a base class pointer 
unless the method is declared virtual in the base class and is overridden in the derived class.

solution: virtual in base class so that the derived class can override*/
#ifndef UNIT_H
#define UNIT_H
class Unit {
private:
    int beds;
    int val;
    double area;

public:

    // a default constructor 
    Unit();
    // a constructor that takes: the value, number of bedrooms, and the size
    Unit(int unit_val, int num_beds, double unit_size);   

    int get_Num_Bedrooms();// returns the number of bedrooms for the unit
    int get_Value(); // returns the value in dollars of the Unit
    double get_Area(); // returns the number of square meters in the unit
};
#endif
#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirCraft.h"
#include <string>

class Helicopter : public AirCraft {
private:
    std::string name;  // name of the Helicopter

public:
    Helicopter(); // Default constructor
    Helicopter(int w, std::string n);  // creates a Helicopter with weight w and name n
    void fly(int headwind, int minutes) override; // Override the fly method
    std::string get_name() const; // Getter for the name
    void set_name(const std::string& n); // Setter for the name
};

#endif // HELICOPTER_H

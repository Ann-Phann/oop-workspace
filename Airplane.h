#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirCraft.h"

class Airplane : public AirCraft {
private:
    int numPassengers;  // Number of passengers on the Airplane

public:
    Airplane();  // Default constructor
    Airplane(int w, int p);  // Constructor with weight and number of passengers
    void reducePassengers(int x);
    int get_numPassengers() const;
    void fly(int headwind, int minutes) override;  // Override to specify how this airplane flies
};

#endif // AIRPLANE_H

#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft {
private:
    int weight;                  // the weight of AirCraft
    float fuel;                  // fuel percentage, initially 100%
    int numberOfFlights;         // initially 0

public:
    AirCraft();
    AirCraft(int w);
    void refuel();
    virtual void fly(int headwind, int minutes);

    int get_weight() const;
    void set_weight(int w);
    float get_fuel() const;
    void set_fuel(float f);
    int get_numberOfFlights() const;
    void set_numberOfFlights(int n);
};

#endif // AIRCRAFT_H

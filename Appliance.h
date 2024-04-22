#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
private:
    int powerRating;
    bool isOn;

public:
    Appliance();
    Appliance(int powerRating);

    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();

    //getter and setter method to get object's data
    void set_power(int power);
    int get_power();

    void set_mode(bool mode);
    bool get_mode();

};
#endif
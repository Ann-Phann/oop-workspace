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
    void set_powerRating(int power);
    int get_powerRating();

    void set_isOn(bool mode);
    bool get_isOn();

};
#endif
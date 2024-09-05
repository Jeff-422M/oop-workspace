#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
#include <string>

class Helicopter : public AirVehicle {
private:
    int weight;
    std::string name;
    double fuel;
    int numberOfFlights;

public:
    Helicopter();

    Helicopter(int w, std::string n);

    int get_weight() const;
    void set_weight(int w);

    std::string get_name() const;
    void set_name(const std::string &n);

    double get_fuel() const;
    void set_fuel(double f);

    int get_numberOfFlights() const;

    void fly(int headwind, int minutes);
};

#endif

#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirVehicle.h"

class Airplane : public AirVehicle {
private:
    int weight;
    int numPassengers;
    double fuel;
    int numberOfFlights;

public:
    Airplane();

    Airplane(int w, int p);

    int get_numPassengers() const;
    int get_weight() const;

    void reducePassengers(int x);

    void fly(int headwind, int minutes);
};

#endif

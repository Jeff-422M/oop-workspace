#include "Airplane.h"
#include <iostream>

Airplane::Airplane() : weight(0), numPassengers(0), fuel(100.0), numberOfFlights(0) {}

Airplane::Airplane(int w, int p) : weight(w), numPassengers(p), fuel(100.0), numberOfFlights(0) {}

int Airplane::get_numPassengers() const { return numPassengers; }
int Airplane::get_weight() const { return weight; }

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}

void Airplane::fly(int headwind, int minutes) {
    if (fuel < 20.0) {
        std::cout << "Not enough fuel to take off.\n";
        return;
    }

    double fuelUsage = 0.25;
    if (headwind >= 60) {
        fuelUsage = 0.5;
    }

    fuelUsage += 0.001 * numPassengers;

    double totalFuelUsed = fuelUsage * minutes;
    if (fuel - totalFuelUsed < 20.0) {
        std::cout << "Flight would result in less than 20% fuel, aborting flight.\n";
        return;
    }

    fuel -= totalFuelUsed;
    numberOfFlights++;

    std::cout << "Flight completed. Remaining fuel: " << fuel << "%\n";
}

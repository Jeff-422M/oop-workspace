#include "Helicopter.h"
#include <iostream>

Helicopter::Helicopter() : weight(0), name(""), fuel(100.0), numberOfFlights(0) {}

Helicopter::Helicopter(int w, std::string n) : weight(w), name(n), fuel(100.0), numberOfFlights(0) {}

int Helicopter::get_weight() const { return weight; }
std::string Helicopter::get_name() const { return name; }
double Helicopter::get_fuel() const { return fuel; }
int Helicopter::get_numberOfFlights() const { return numberOfFlights; }

void Helicopter::set_weight(int w) { weight = w; }
void Helicopter::set_name(const std::string &n) { name = n; }
void Helicopter::set_fuel(double f) { fuel = f; }

void Helicopter::fly(int headwind, int minutes) {
    if (fuel < 20.0) {
        std::cout << "Not enough fuel to take off.\n";
        return;
    }

    double fuelUsage = 0.18;
    if (headwind >= 40) {
        fuelUsage = 0.4;
    }

    if (weight > 5670) {
        fuelUsage += 0.01 * (weight - 5670);
    }

    double totalFuelUsed = fuelUsage * minutes;
    if (fuel - totalFuelUsed < 20.0) {
        std::cout << "Flight would result in less than 20% fuel, aborting flight.\n";
        return;
    }

    fuel -= totalFuelUsed;
    numberOfFlights++;

    std::cout << "Flight completed. Remaining fuel: " << fuel << "%\n";
}

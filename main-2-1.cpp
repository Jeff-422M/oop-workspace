#include "Helicopter.h"
#include <iostream>

int main() {
    Helicopter heli(5690, "Rescue Heli");

    heli.set_fuel(80.0);

    std::cout << "Initial fuel: " << heli.get_fuel() << "%\n";

    heli.fly(45, 10);

    heli.fly(20, 5);

    std::cout << "Number of flights: " << heli.get_numberOfFlights() << "\n";

    return 0;
}

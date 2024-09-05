#include <iostream>
#include "AirVehicle.h"

int main() {
    AirVehicle av(500);

    std::cout << "Initial weight: " << av.get_weight() << "\n";
    std::cout << "Initial fuel: " << av.get_fuel() << "%\n";
    std::cout << "Initial number of flights: " << av.get_numberOfFlights() << "\n";

    av.fly(20, 30);
    std::cout << "\nAfter flight:\n";
    std::cout << "Fuel: " << av.get_fuel() << "%\n";
    std::cout << "Number of flights: " << av.get_numberOfFlights() << "\n";

    av.refuel();
    std::cout << "\nAfter refuel:\n";
    std::cout << "Fuel: " << av.get_fuel() << "%\n";

    return 0;
}

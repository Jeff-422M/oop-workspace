#include "Airplane.h"
#include <iostream>

int main() {
    Airplane plane(10000, 100);

    plane.fly(65, 120);

    plane.reducePassengers(50);
    std::cout << "Passengers after reduction: " << plane.get_numPassengers() << "\n";

    plane.fly(30, 60);

    return 0;
}

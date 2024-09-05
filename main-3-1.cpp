#include "AirFleet.h"
#include <iostream>

int main() {
    AirFleet fleet;

    AirVehicle** vehicles = fleet.get_fleet();

    for (int i = 0; i < 5; i++) {
        vehicles[i]->display();
    }

    return 0;
}

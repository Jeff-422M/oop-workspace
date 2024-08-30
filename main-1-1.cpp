#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    std::vector<Vehicle*> vehicles;
    int numCars, numBuses, numMotorbikes;

    std::cout << "Enter number of Cars: ";
    std::cin >> numCars;
    std::cout << "Enter number of Buses: ";
    std::cin >> numBuses;
    std::cout << "Enter number of Motorbikes: ";
    std::cin >> numMotorbikes;

    // Create and store vehicles
    for (int i = 0; i < numCars; i++) {
        vehicles.push_back(new Car(i));
    }
    for (int i = 0; i < numBuses; i++) {
        vehicles.push_back(new Bus(numCars + i));
    }
    for (int i = 0; i < numMotorbikes; i++) {
        vehicles.push_back(new Motorbike(numCars + numBuses + i));
    }

    // Display parking durations
    for (Vehicle* v : vehicles) {
        std::cout << "Vehicle ID " << v->getID() << " Parking Duration: " << v->getParkingDuration() << " seconds\n";
    }

    // Clean up
    for (Vehicle* v : vehicles) {
        delete v;
    }
    vehicles.clear();

    return 0;
}

#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);
    std::time_t currentTime = std::time(nullptr);

    // Example of creating and parking a car
    Vehicle* car = new Car(1, currentTime);
    if (!lot.parkVehicle(car)) {
        delete car; // Ensure to clean up if not parked
    }

    // Further interactions can be added as per requirements

    std::cout << "Number of vehicles in lot: " << lot.getCount() << std::endl;
    return 0;
}

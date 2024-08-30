#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);

    // Simulate parking 5 Cars, 3 Buses, and 2 Motorbikes
    for (int i = 0; i < 5; i++) {
        lot.parkVehicle(new Car(i, std::time(nullptr) - (i + 1) * 10)); // Simulated staggered entry times
    }
    for (int i = 5; i < 8; i++) {
        lot.parkVehicle(new Bus(i, std::time(nullptr) - (i + 1) * 15));
    }
    for (int i = 8; i < 10; i++) {
        lot.parkVehicle(new Motorbike(i, std::time(nullptr) - (i + 1) * 20));
    }

    // Count and print overstaying vehicles
    int count = lot.countOverstayingVehicles(15);
    std::cout << "Number of overstaying vehicles: " << count << std::endl;

    return 0;
}

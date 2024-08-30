#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);  // Create a parking lot with a capacity of 10 vehicles

    // Initially fill the parking lot as described
    for (int i = 0; i < 5; i++) {  // Park 5 Cars
        lot.parkVehicle(new Car(i));
    }
    for (int i = 0; i < 3; i++) {  // Park 3 Buses
        lot.parkVehicle(new Bus(5 + i));
    }
    for (int i = 0; i < 2; i++) {  // Park 2 Motorbikes
        lot.parkVehicle(new Motorbike(8 + i));
    }

    int maxParkingDuration;
    std::cout << "Enter maximum parking duration (in seconds): ";
    std::cin >> maxParkingDuration;

    // Function to count the number of vehicles that have overstayed in the parking lot
    int countOverstayingVehicles(const ParkingLot& lot, int maxDuration) {
        int count = 0;
        for (int i = 0; i < lot.getCount(); i++) {
            if (lot.vehicles[i]->getParkingDuration() > maxDuration) {
                count++;
            }
        }
        return count;
    }

    int overstayCount = countOverstayingVehicles(lot, maxParkingDuration);
    std::cout << "Number of overstaying vehicles: " << overstayCount << std::endl;

    return 0;
}

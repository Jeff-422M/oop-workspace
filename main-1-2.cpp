#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);
    int choice, vehicleID;
    Vehicle* vehicle = nullptr;

    while (lot.getCount() < lot.capacity) {
        std::cout << "Choose a vehicle type to park:\n";
        std::cout << "1. Car\n";
        std::cout << "2. Bus\n";
        std::cout << "3. Motorbike\n";
        std::cout << "4. Stop parking\n";
        std::cin >> choice;

        if (choice == 4) {
            break;
        }

        std::cout << "Enter vehicle ID: ";
        std::cin >> vehicleID;

        switch (choice) {
            case 1:
                vehicle = new Car(vehicleID);
                break;
            case 2:
                vehicle = new Bus(vehicleID);
                break;
            case 3:
                vehicle = new Motorbike(vehicleID);
                break;
            default:
                std::cout << "Invalid choice. Please select a valid vehicle type.\n";
                continue;
        }

        lot.parkVehicle(vehicle);
    }

    std::cout << "Enter ID of vehicle to unpark: ";
    std::cin >> vehicleID;
    lot.unparkVehicle(vehicleID);

    return 0;
}

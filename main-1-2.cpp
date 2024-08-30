#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);
    Vehicle *v;
    int type, id;
    std::time_t entryTime;

    // Parking vehicles
    while (lot.getCount() < 10) {
        std::cout << "Enter vehicle type (1=Car, 2=Bus, 3=Motorbike): ";
        std::cin >> type;
        std::cout << "Enter ID: ";
        std::cin >> id;
        entryTime = std::time(nullptr);

        switch (type) {
            case 1: v = new Car(id, entryTime); break;
            case 2: v = new Bus(id, entryTime); break;
            case 3: v = new Motorbike(id, entryTime); break;
            default: std::cout << "Invalid type" << std::endl; continue;
        }

        if (!lot.parkVehicle(v)) {
            delete v;
            break;
        }
    }

    // Unparking a vehicle
    std::cout << "Enter ID to unpark: ";
    std::cin >> id;
    if (!lot.unparkVehicle(id)) {
        std::cout << "Vehicle ID not found or could not be unparked." << std::endl;
    }

    return 0;
}

// ParkingLot.cpp
#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int cap) : capacity(cap) {}

void ParkingLot::parkVehicle(Vehicle* v) {
    if (vehicles.size() < capacity) {
        vehicles.push_back(v);
    } else {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == id) {
            vehicles.erase(it);
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::getCount() {
    return vehicles.size();
}

int ParkingLot::countOverstayingVehicles(int maxDuration) {
    int count = 0;
    for (auto v : vehicles) {
        if (difftime(time(nullptr), v->timeOfEntry) > maxDuration) {
            count++;
        }
    }
    return count;
}

#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int cap) : capacity(cap) {}

ParkingLot::~ParkingLot() {
    for (Vehicle* v : vehicles) {
        delete v;
    }
    vehicles.clear();
}

void ParkingLot::parkVehicle(Vehicle* v) {
    if (vehicles.size() < capacity) {
        vehicles.push_back(v);
        std::cout << "Vehicle parked with ID: " << v->getID() << std::endl;
    } else {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == ID) {
            delete *it;
            vehicles.erase(it);
            std::cout << "Vehicle with ID " << ID << " has been unparked." << std::endl;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::getCount() const {
    return vehicles.size();
}

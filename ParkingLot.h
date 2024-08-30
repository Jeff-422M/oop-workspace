#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include "Vehicle.h"

class ParkingLot {
private:
    std::vector<Vehicle*> vehicles;
    int capacity;

public:

    ParkingLot(int cap) : capacity(cap) {}

    ~ParkingLot() {
        for (Vehicle* v : vehicles) {
            delete v;
        }
        vehicles.clear();
    }

    void parkVehicle(Vehicle* v) {
        if (vehicles.size() < capacity) {
            vehicles.push_back(v);
            std::cout << "Vehicle parked with ID: " << v->getID() << std::endl;
        } else {
            std::cout << "The lot is full" << std::endl;
        }
    }

    void unparkVehicle(int ID) {
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

    int getCount() const {
        return vehicles.size();
    }
};

#endif

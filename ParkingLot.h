#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>
#include <iostream> // Include for std::cout and std::endl

class ParkingLot {
private:
    std::vector<Vehicle*> vehicles;
    size_t capacity;  // Using size_t to avoid comparison warning

public:
    ParkingLot(size_t maxCapacity) : capacity(maxCapacity) {}
    ~ParkingLot() {
        for (Vehicle* v : vehicles) {
            delete v;
        }
    }

    bool parkVehicle(Vehicle* v) {
        if (vehicles.size() >= capacity) {
            std::cout << "The lot is full" << std::endl;
            return false;
        }
        vehicles.push_back(v);
        return true;
    }

    bool unparkVehicle(int id) {
        for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
            if ((*it)->getID() == id) {
                delete *it;
                vehicles.erase(it);
                return true;
            }
        }
        std::cout << "Vehicle not in the lot" << std::endl;
        return false;
    }

    size_t getCount() const { return vehicles.size(); }
};

#endif

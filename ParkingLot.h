#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>

class ParkingLot {
private:
    std::vector<Vehicle*> vehicles;
    int capacity;

public:
    ParkingLot(int maxCapacity) : capacity(maxCapacity) {}
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
                vehicles.erase(it);
                return true;
            }
        }
        std::cout << "Vehicle not in the lot" << std::endl;
        return false;
    }
    int getCount() const { return vehicles.size(); }
    int countOverstayingVehicles(int maxParkingDuration) const {
        int count = 0;
        for (const auto& v : vehicles) {
            if (v->getParkingDuration() > maxParkingDuration)
                count++;
        }
        return count;
    }
};

#endif

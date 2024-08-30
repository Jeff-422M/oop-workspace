#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id, std::time_t entryTime) : Vehicle(id, entryTime) {}
    int getParkingDuration() const override {
        return static_cast<int>(0.75 * difftime(std::time(nullptr), timeOfEntry)); // Apply a 25% reduction
    }
};

#endif

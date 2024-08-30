#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike(int id, std::time_t entryTime) : Vehicle(id, entryTime) {}
    int getParkingDuration() const override {
        return static_cast<int>(0.85 * difftime(std::time(nullptr), timeOfEntry)); // Apply a 15% reduction
    }
};

#endif

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(int id, std::time_t entryTime) : Vehicle(id, entryTime) {}
    int getParkingDuration() const override {
        return static_cast<int>(0.9 * difftime(std::time(nullptr), timeOfEntry)); // Apply a 10% reduction
    }
};

#endif

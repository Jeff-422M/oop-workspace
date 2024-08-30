// Car.h
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(int id, std::time_t entryTime) : Vehicle(id, entryTime) {}
    int getParkingDuration() override;
};

#endif

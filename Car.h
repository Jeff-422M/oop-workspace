// Car.h
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    using Vehicle::Vehicle;
    int getParkingDuration() override;
};

#endif

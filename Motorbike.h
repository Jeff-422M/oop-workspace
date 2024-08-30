#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    using Vehicle::Vehicle;
    int getParkingDuration() const override;
};

#endif

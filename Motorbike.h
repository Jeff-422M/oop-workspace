// Motorbike.h
#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike(int id, std::time_t entryTime) : Vehicle(id, entryTime) {}
    int getParkingDuration() override;
};

#endif

// Bus.h
#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id, std::time_t entryTime) : Vehicle(id, entryTime) {}
    int getParkingDuration() override;
};

#endif

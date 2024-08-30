// ParkingLot.h
#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>

class ParkingLot {
    std::vector<Vehicle*> vehicles;
    int capacity;
public:
    ParkingLot(int cap);
    void parkVehicle(Vehicle* v);
    void unparkVehicle(int id);
    int getCount();
};

#endif

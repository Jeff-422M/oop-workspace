// Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
protected:
    std::time_t timeOfEntry;
    int ID;
public:
    Vehicle(int id, std::time_t entryTime);
    virtual int getParkingDuration() = 0;
    int getID();
};

#endif

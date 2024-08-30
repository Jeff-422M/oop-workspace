#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
protected:
    int ID;
    std::time_t timeOfEntry;

public:
    Vehicle(int id, std::time_t entryTime) : ID(id), timeOfEntry(entryTime) {}
    virtual ~Vehicle() = default;

    virtual int getParkingDuration() const = 0;
    int getID() const { return ID; }
};

#endif

#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
protected:
    std::time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    virtual ~Vehicle() = default;
    virtual int getParkingDuration() const = 0;
    int getID() const;
};

#endif // VEHICLE_H

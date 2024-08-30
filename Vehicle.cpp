// Vehicle.cpp
#include "Vehicle.h"

Vehicle::Vehicle(int id, std::time_t entryTime) : timeOfEntry(entryTime), ID(id) {}

int Vehicle::getID() {
    return ID;
}

// Vehicle.cpp
#include "Vehicle.h"

Vehicle::Vehicle(int id, std::time_t entryTime) : ID(id), timeOfEntry(entryTime) {}

int Vehicle::getID() {
    return ID;
}

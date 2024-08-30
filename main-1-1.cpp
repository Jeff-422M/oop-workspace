// main-1-1.cpp
#include <iostream>
#include <ctime>

class Vehicle {
protected:
    std::time_t timeOfEntry;
    int ID;
public:
    Vehicle(int id, std::time_t entryTime) : ID(id), timeOfEntry(entryTime) {}
    virtual int getParkingDuration() = 0;
    int getID() { return ID; }
};

class Car : public Vehicle {
public:
    using Vehicle::Vehicle;
    int getParkingDuration() override {
        return static_cast<int>(difftime(time(nullptr), timeOfEntry) * 0.9); // 10% reduction
    }
};

class Bus : public Vehicle {
public:
    using Vehicle::Vehicle;
    int getParkingDuration() override {
        return static_cast<int>(difftime(time(nullptr), timeOfEntry) * 0.75); // 25% reduction
    }
};

class Motorbike : public Vehicle {
public:
    using Vehicle::Vehicle;
    int getParkingDuration() override {
        return static_cast<int>(difftime(time(nullptr), timeOfEntry) * 0.85); // 15% reduction
    }
};

int main() {
    // Here you will add the code to create vehicles based on user input and print parking durations
    return 0;
}

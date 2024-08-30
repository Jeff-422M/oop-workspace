// main-1-2.cpp
#include "Vehicle.h"  // Assuming the Vehicle classes are defined in a header file
#include <iostream>
#include <vector>

class ParkingLot {
    std::vector<Vehicle*> vehicles;
    int capacity;
public:
    ParkingLot(int cap) : capacity(cap) {}
    void parkVehicle(Vehicle* v) {
        if (vehicles.size() < capacity) {
            vehicles.push_back(v);
        } else {
            std::cout << "The lot is full" << std::endl;
        }
    }
    void unparkVehicle(int id) {
        // Implementation to remove a vehicle by ID
    }
    int getCount() { return vehicles.size(); }
};

int main() {
    // Here you will add the code to interact with the user to park and unpark vehicles
    return 0;
}

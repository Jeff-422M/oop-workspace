// Car.cpp
#include "Car.h"
#include <ctime>

int Car::getParkingDuration() {
    return static_cast<int>(difftime(time(nullptr), timeOfEntry) * 0.9);  // 10% reduction
}

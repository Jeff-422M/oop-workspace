#include "Car.h"

int Car::getParkingDuration() const {
    return (std::time(nullptr) - timeOfEntry) * 0.9;
}

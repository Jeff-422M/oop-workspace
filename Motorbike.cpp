#include "Motorbike.h"

int Motorbike::getParkingDuration() const {
    return (std::time(nullptr) - timeOfEntry) * 0.85;
}

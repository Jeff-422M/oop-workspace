// Motorbike.cpp
#include "Motorbike.h"
#include <ctime>

int Motorbike::getParkingDuration() {
    return static_cast<int>(difftime(time(nullptr), timeOfEntry) * 0.85);  // 15% reduction
}

// Bus.cpp
#include "Bus.h"
#include <ctime>

int Bus::getParkingDuration() {
    return static_cast<int>(difftime(time(nullptr), timeOfEntry) * 0.75);  // 25% reduction
}

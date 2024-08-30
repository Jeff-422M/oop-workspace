#include "Bus.h"

int Bus::getParkingDuration() const {
    return (std::time(nullptr) - timeOfEntry) * 0.75;
}

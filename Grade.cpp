#include "Grade.h"

Grade::Grade(const std::string& assignment, int value) : assignment(assignment), value(value) {}

int Grade::getValue() const {
    return value;
}

std::string Grade::getAssignment() const {
    return assignment;
}

#include "Course.h"

Course::Course(const std::string& name, int id) : name(name), id(id) {}

void Course::addPerson(Person* p) {
    persons.push_back(p);
}

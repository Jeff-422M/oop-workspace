#include "Student.h"

Student::Student(const std::string& name, int id) : Person(name), student_id(id) {}

int Student::getId() const {
    return student_id;
}

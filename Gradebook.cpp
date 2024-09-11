#include "Gradebook.h"
#include <iostream>

void Gradebook::addGrade(int stud_id, int course_id, const std::string& assignment, int value) {
    grades.push_back(Grade(assignment, value));
}

void Gradebook::printGrades() const {
    for (const auto& grade : grades) {
        std::cout << "Assignment: " << grade.getAssignment() << ", Value: " << grade.getValue() << std::endl;
    }
}

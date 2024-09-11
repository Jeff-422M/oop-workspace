#include "University.h"
#include "Student.h"
#include "Instructor.h"
#include "Gradebook.h"
#include <iostream>

int main() {
    // 1. Create a university
    University uni("Sample University", "Sample Location");

    // 2. Add a course to this university
    uni.addCourse(101, "Computer Science");

    // 3. Add a student to this course
    Student s("John Doe", 1234);

    // 4. Add a grade for this student for some of the assignments
    Gradebook gradebook;
    gradebook.addGrade(s.getId(), 101, "Assignment 1", 90);

    // Output results
    gradebook.printGrades();

    return 0;
}

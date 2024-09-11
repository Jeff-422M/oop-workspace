#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Person.h"

class Course {
private:
    std::string name;
    int id;
    std::vector<Person*> persons;
public:
    Course(const std::string& name, int id);
    void addPerson(Person* p);
};

#endif

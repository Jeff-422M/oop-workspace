#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int student_id;
public:
    Student(const std::string& name, int id);
    int getId() const;
};

#endif

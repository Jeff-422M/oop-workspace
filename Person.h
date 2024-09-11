#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
public:
    Person(const std::string& name);
    virtual ~Person();
    std::string getName() const;
};

#endif

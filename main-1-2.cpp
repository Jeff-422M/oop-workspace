#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main() {
    int n = 5; // Example to create a list of 5 Persons
    PersonList personList = createPersonList(n);

    for (int i = 0; i < personList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << personList.people[i].name << ", Age = " << personList.people[i].age << std::endl;
    }

    delete[] personList.people;
    return 0;
}

#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n = 3;
    PersonList originalList = createPersonList(n);
    PersonList shallowList = shallowCopyPersonList(originalList);

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << std::endl;
    }

    originalList.people[0].name = "Changed Name";
    originalList.people[0].age = 99;

    std::cout << "\nShallow Copy List (after change):" << std::endl;
    for (int i = 0; i < shallowList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << shallowList.people[i].name << ", Age = " << shallowList.people[i].age << std::endl;
    }

    delete[] originalList.people;
}

#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl);

int main() {
    int n = 3;
    PersonList originalList = createPersonList(n);
    PersonList copiedList = deepCopyPersonList(originalList);

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << std::endl;
    }

    std::cout << "\nCopied List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << copiedList.people[i].name << ", Age = " << copiedList.people[i].age << std::endl;
    }

    delete[] originalList.people;
    delete[] copiedList.people;
    return 0;
}

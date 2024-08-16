#include "Person.h"
#include <iostream>

int main() {
    int n = 5;
    PersonList pl = createPersonList(n);
    PersonList plCopy = deepCopyPersonList(pl);

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Name: " << pl.people[i].name << ", Age: " << pl.people[i].age << std::endl;
    }

    std::cout << "Deep Copied List:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Name: " << plCopy.people[i].name << ", Age: " << plCopy.people[i].age << std::endl;
    }

    delete[] pl.people;
    delete[] plCopy.people;
    return 0;
}

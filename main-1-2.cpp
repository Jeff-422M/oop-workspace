#include "Person.h"
#include <iostream>

int main() {
    int n = 5;
    PersonList pl = createPersonList(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Name: " << pl.people[i].name << ", Age: " << pl.people[i].age << std::endl;
    }

    delete[] pl.people;
    return 0;
}

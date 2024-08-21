#include <iostream>
#include "Musician.h"

int main() {
    Musician musician1;
    std::cout << "Instrument: " << musician1.get_instrument() << ", Experience: " << musician1.get_experience() << std::endl;

    Musician musician2("Piano", 5);
    std::cout << "Instrument: " << musician2.get_instrument() << ", Experience: " << musician2.get_experience() << std::endl;

    return 0;
}

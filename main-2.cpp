#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    Ship ship(0, 0);
    Mine mine(1, 1);

    ship.move(1, 0);
    std::cout << "Ship Position: (" << std::get<0>(ship.getPos()) << ", " 
              << std::get<1>(ship.getPos()) << ")\n";

    Explosion explosion = mine.explode();
    explosion.apply(ship);
    std::cout << "Ship after Explosion: (" << std::get<0>(ship.getPos()) << ", " 
              << std::get<1>(ship.getPos()) << ")\n";

    return 0;
}

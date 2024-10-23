#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity {
public:
    Ship(int x, int y) : GameEntity(x, y, 'S') {}

    void move(int dx, int dy) {
        auto [x, y] = getPos();
        position = std::make_tuple(x + dx, y + dy);
    }
};

#endif

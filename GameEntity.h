#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

enum GameEntityType { ExplosionType, MineType, NoneType, ShipType };

class GameEntity {
private:
    std::tuple<int, int> position;
    GameEntityType type;

public:
    GameEntity(int x, int y, char entityType) 
        : position(std::make_tuple(x, y)) {
        switch (entityType) {
            case 'E': type = ExplosionType; break;
            case 'M': type = MineType; break;
            case 'S': type = ShipType; break;
            default: type = NoneType;
        }
    }

    std::tuple<int, int> getPos() const {
        return position;
    }

    GameEntityType getType() const {
        return type;
    }
};

#endif

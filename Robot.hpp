#ifndef ROBOT_HPP
#define ROBOT_HPP

#include "GridItem.hpp"

class Robot : public GridItem {
private:
    int health;

public:
    Robot(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), health(3) {}

    int getHealth() const { return health; }

    void takeHit() {
        if (health > 0) {
            health--;
        }
    }

    bool move(int xOffset, int yOffset) {
        auto [x, y] = getCoordinates();
        if (xOffset != 0 && yOffset != 0) return false;
        if ((x + xOffset >= 0 && x + xOffset < getGridWidth()) && (y + yOffset >= 0 && y + yOffset < getGridHeight())) {
            setCoordinates(x + xOffset, y + yOffset);
            return true;
        }
        return false;
    }
};

#endif

#pragma once
#include "GridItem.h"

class Robot : public GridItem {
private:
    int health;
    int gridWidth, gridHeight;

public:
    Robot(int gridWidth, int gridHeight)
        : GridItem(0, 0), health(3), gridWidth(gridWidth), gridHeight(gridHeight) {}

    int getHealth() const { return health; }

    void takeHit() {
        if (health > 0) {
            --health;
        }
    }

    bool move(int xOffset, int yOffset) {
        if ((xOffset != 0 && yOffset != 0) || (xOffset == 0 && yOffset == 0)) {
            return false;
        }

        int newX = x + xOffset;
        int newY = y + yOffset;

        if (newX >= 0 && newX < gridWidth && newY >= 0 && newY < gridHeight) {
            x = newX;
            y = newY;
            return true;
        }
        return false;
    }
};

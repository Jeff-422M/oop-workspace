#pragma once
#include "Interactable.h"
#include "Robot.h"
#include <cmath>

class Obstacle : public Interactable {
public:
    Obstacle(int x, int y) : Interactable(x, y) {}

    bool interact(Robot* player) override {
        double distance = std::sqrt(std::pow(player->getX() - x, 2) + std::pow(player->getY() - y, 2));
        if (distance == 0) {
            player->takeHit();
            return player->getHealth() == 0;
        }
        return false;
    }

    InteractableType getType() const override {
        return OBSTACLE;
    }
};

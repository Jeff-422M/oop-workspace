#pragma once
#include "Interactable.h"
#include "Robot.h"
#include <cmath>

class Goal : public Interactable {
public:
    Goal(int x, int y) : Interactable(x, y) {}

    bool interact(Robot* player) override {
        return (player->getX() == x && player->getY() == y);
    }

    InteractableType getType() const override {
        return GOAL;
    }
};

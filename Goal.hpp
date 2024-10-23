#ifndef GOAL_HPP
#define GOAL_HPP

#include "Interactable.hpp"
#include "Helper.hpp"

class Goal : public Interactable {
public:
    Goal(int width, int height) : Interactable(0, 0, width, height) {}

    bool interact(Robot* player) override {
        auto playerPos = player->getCoordinates();
        auto goalPos = getCoordinates();
        return Helper::euclideanDistance(playerPos, goalPos) == 0.0;
    }

    InteractableType getType() const override {
        return GOAL;
    }
};

#endif

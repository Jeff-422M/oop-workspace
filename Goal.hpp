#ifndef GOAL_HPP
#define GOAL_HPP

#include "Interactable.hpp"

class Goal : public Interactable {
public:
    Goal(int width, int height) : Interactable(0, 0, width, height) {}

    bool interact(Robot* player) override {
        auto [rx, ry] = player->getCoordinates();
        auto [gx, gy] = getCoordinates();
        return (rx == gx && ry == gy);
    }

    InteractableType getType() const override {
        return InteractableType::GOAL;
    }
};

#endif

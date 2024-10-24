#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

#include "Interactable.hpp"

class Obstacle : public Interactable {
public:
    Obstacle(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    bool interact(Robot* player) override {
        auto [px, py] = player->getCoordinates();
        auto [ox, oy] = getCoordinates();
        double distance = Helper::euclideanDistance({px, py}, {ox, oy});
        if (distance == 0) {
            player->takeHit();
            return player->getHealth() > 0;
        }
        return false;
    }

    InteractableType getType() const override {
        return InteractableType::OBSTACLE;
    }
};

#endif


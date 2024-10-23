#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

#include "Interactable.hpp"
#include "Helper.hpp"

class Obstacle : public Interactable {
public:
    Obstacle(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    bool interact(Robot* player) override {
        auto playerPos = player->getCoordinates();
        auto obstaclePos = getCoordinates();
        double distance = Helper::euclideanDistance(playerPos, obstaclePos);
        if (distance == 0.0) {
            player->takeHit();
            return player->getHealth() == 0;
        }
        return false;
    }

    InteractableType getType() const override {
        return OBSTACLE;
    }
};

#endif

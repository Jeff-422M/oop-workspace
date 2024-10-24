#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

#include "Interactable.hpp"
#include "Helper.hpp"

class Obstacle : public Interactable {
public:
    Obstacle(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    bool interact(Robot* player) override {
        std::pair<int, int> playerCoords = player->getCoordinates();
        int px = playerCoords.first;
        int py = playerCoords.second;

        std::pair<int, int> obstacleCoords = getCoordinates();
        int ox = obstacleCoords.first;
        int oy = obstacleCoords.second;

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


